// electricUkr.c -- programm counted taxe for electicity in Ukraine

#include<stdio.h>
void printer(double kwh, double bill);
int main(void) {
  int points;
  double kwh, price, bill;
  printf("Программа расчитывает стоимость потребленной электроэнергии.\n");
  printf("Чтобы воспользоваться программой необходимо ввести:\n");
  printf("\t 1. Количество точек изменения тарифа;\n");
  printf("\t 2. Указать точки изменения тарифа и ее стоимость;\n");
  printf("\t 3. Указать количество потребленной энергии;\n");
  printf("Введите кол-во точек изменения тарификации"
         "(если тариф единый -- введите *-1*):\n");
  printf("(чтобы выйти из программы - нажмите q)\n");
  scanf("%d", &points);
  if (points >= 1){
     double breaks[points];
     double rate[points + 1];
     double base[points];
     for(int i = 0; i < points; i++) {
       printf("Введите точку изменения тарифа(до какого объема кВт действует тариф?)"
              "и сам тариф через символ *ПРОБЕЛ*\n");
       scanf("%lf %lf", &breaks[i], &rate[i]);
     }
      printf("Введите тариф за потребление электроэнергии свыше последней указанной точки\n");
      scanf("%lf", &rate[points]);
      printf("Введите количесвто потребленной электроэнергии:\n");
      scanf("%lf", &kwh);

      base[0] = breaks[0] * rate[0];
      for(int j = 1; j < points; j++){
        base[j] = base[j-1] + rate[j] * (breaks[j] - breaks[j-1]);
      }
      if(kwh <= breaks[0]){
         bill = kwh * rate[0];
         printer(kwh, bill);
       } else
         if(kwh > breaks[points - 1]){
            bill = base[points-1] + rate[points] * (kwh - breaks[points - 1]);
            printer(kwh, bill);
       } else{
         for(int p = 1; p < points; p++){
           if(kwh <= breaks[p]){
             bill = base[p-1] + rate[p] * (kwh - breaks[p-1]);
             printer(kwh, bill);
           }
         }
        }
  } else if(points == -1){
     printf("Введите стоимость кВт в час:\n");
     scanf("%lf", &price);
     printf("Введите количесвто потребленной электроэнергии:\n");
     scanf("%lf", &kwh);
     bill = kwh * price;
     printer(kwh, bill);
  } else
     return 0;

  printf("Чтобы платить меньше, используйте энергосберегающие технологии!!!\n");
  return 0;
}
void printer(double kwh, double bill){
  printf("За потребленные %.1f кВт электроэнергии вам необходимо заплатить"
         " сумму в размере %1.2f грн.\n", kwh, bill);
}
