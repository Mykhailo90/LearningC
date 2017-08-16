// exponent.c - programm show exponentical growing

#include<stdio.h>
#define SQUARES 64
int main(void){
  const double CROP = 2e16; //World wheat crop
  double current, total;
  int count = 1;
  printf("SQUARE        ADD          RESULT    %%FROM THE WORLD\n");
  total = current = 1.0;
  printf("%3d %16.3e %13.2e %13.2e\n", count, current, total, total/CROP);
  while (count < SQUARES) {
    count++;
    current *= 2.0; //double the number of grains on the next cage
    total = total + current;
    printf("%3d %16.3e %13.2e %13.2e\n", count, current, total, total/CROP);
  }
  printf("All ready!!!\n");
  return 0;
}
