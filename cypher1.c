// cypher1.c -- programm change simbols besides space

#include<stdio.h>
#define SPACE ' '
int main(void){
  printf("Programm change your entered symbols.\n");
  char ch;
  ch = getchar();
  while (ch != '\n') {
    if(ch == SPACE)
       putchar(ch);
    else
       putchar(ch + 1);
    ch = getchar();
  }
  putchar(ch);
  return 0;
}
