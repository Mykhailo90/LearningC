// file7.c --programm about ascii

#include<stdio.h>
int main(void) {
  int ten_ascii;
  printf("Enter number from ascii:\n");
  scanf("%d", &ten_ascii);
  printf("The entered number corresponds to the symbol of the keyboard %c\n", ten_ascii);
  printf("\aWhat is it???\n");
  return 0;
}
