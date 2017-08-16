// file9.c --programm convert from age in the year to age in the seconds

#include<stdio.h>
#define PARAM 315600000
int main(void){
  int age;
  float test = 3.2f;
  unsigned long long age_in_seconds;
  printf("Enter your age in the year: ");
  scanf("%d", &age);
  age_in_seconds = age * PARAM;
  printf("Your age in seconds is %llu.\n", age_in_seconds);
  printf("%.2f test format\n",age*test );
  printf("%2.2e compare %2.2f\n", 1201.0, 1201.0);

  return 0;
}
