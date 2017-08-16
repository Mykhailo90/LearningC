// file10.c --programm use a veriable-width input field

#include<stdio.h>
int main(void) {
  unsigned width, precision;
  int number = 256;
  double weight = 242.5;
  printf("Enter the fields width: \n");
  scanf("%d", &width);
  printf("The value is %*d;\n", width, number);
  printf("Now enter the fields width and precision: \n");
  scanf("%d %d\n", &width, &precision);
  printf("Weight = %*.*f\n", width, precision, weight);
  printf("All ready!!!\n");
  return 0;
}
