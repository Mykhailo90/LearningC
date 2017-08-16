// file8.c --programm to experiment number with pointer

#include<stdio.h>
int main(void) {
  float val;
  printf("Enter a fractional decimal number:\n");
  scanf("%f", &val);
  printf("Fixed-point entry: %f\n", val);
  printf("Exponential notetion: %e\n", val);
  printf("Binary exponential representation: %a\n", val);
  return 0;
}
