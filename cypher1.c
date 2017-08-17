// cypher1.c -- programm change simbols besides space

#include<stdio.h>
#include<ctype.h>
int main(void){
  printf("Programm change your entered symbols.\n");
  char ch;
  while ((ch = getchar()) != '\n') {
    if(isalpha(ch))
       putchar(ch + 1);
    else
       putchar(ch);  
  }
  putchar(ch);
  return 0;
}
