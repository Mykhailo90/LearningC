// platinum.c --Показывает вес в платиновом эквиваленте;

#include <stdio.h>
int main(void) {
  float weight; /*Вес пользователя*/
  float value; /*Платиновый эквивалент*/
  printf("Хотите узнать свой вес в платиновом эквиваленте?\n");
  printf("Ну что ж, давайте посчитаем!\n");
  printf("Введите свой вес в фунтах\n");
  scanf("%f", &weight);
  value = 1700.0 * weight * 14.5833;
  printf("Ваш вес в платиновом эквиваленте составляет: $%.2f.\n", value);
  printf("Кушайте больше!)))\n");
  printf("Type int have a size - %zd.\n", sizeof(int));
  printf("Type float have a size - %zd.\n", sizeof(float));
  printf("Type double have a size - %zd.\n", sizeof(double));
  return 0;
}
