// shoes1.c --programm show translate size foot
#include<stdio.h>
#define ADJUST 7.31
int main(void){
  const double SCALE = 0.333;
  double shoe, foot;
  shoe = 3.0;
  printf("Mens shoes size    long foot\n");
  while (shoe <= 18.5) {
    foot = SCALE * shoe + ADJUST;
    printf("%8.1f %17.2f\n", shoe, foot);
    shoe += 0.5;
  }  
  return 0;
}
