// electric.c -- programm counted taxe for electicity

#include<stdio.h>
#define RATE1 0.13230 //taxe for first 360kVT
#define RATE2 0.15040 //taxe for next 108kVT
#define RATE3 0.30025 //taxe for next 252kVT
#define RATE4 0.34025 //taxe for more then 720kVT
#define BREAK1 360.0 // change taxe point
#define BREAK2 468.0
#define BREAK3 720.0
#define BASE1 (RATE1 * BREAK1) //price for first part
#define BASE2 (BASE1 + RATE2 * (BREAK2 - BREAK1))
#define BASE3 (BASE2 + RATE3 * (BREAK3 - BREAK2))
int main(void) {
  double kwh, bill;
  printf("Input value for uses electicity in kw/h:\n");
  scanf("%lf", &kwh);
  if(kwh <= BREAK1)
    bill = RATE1 * kwh;
  else if(kwh <= BREAK2)
    bill = BASE1 + RATE2 * (kwh - BREAK1);
  else if(kwh <= BREAK3)
    bill = BASE2 + RATE3 * (kwh - BREAK2);
  else
    bill = BASE3 + RATE4 * (kwh - BREAK3);
  printf("You have to pay for %.1f kw electicity $%1.2f.\n", kwh, bill);
  return 0;
}
