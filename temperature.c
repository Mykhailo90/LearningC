// temperature.c --programm show translate temperature from Cel to Foreng.

#include<stdio.h>
#define ADJUST 32.0
int main(void){
  const double SCALE = 1.8;
  double cel, foreng;
  cel = -50.0;
  printf("Temperature in Cel    Temperature in foreng\n");
  while (cel <= 50.0) {
    foreng = SCALE * cel + ADJUST;
    printf("%10.1f %23.2f\n", cel, foreng);
    cel += 0.5;
  }
/*  float val = 1.15e8;
  printf("%.1f\n", val*2);*/
  return 0;
}
