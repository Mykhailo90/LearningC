// file6.c --programm game with functions

#include <stdio.h>
void one_third(void);
void two(void);
int main(void) {
  printf("Start: \n");
  one_third();
  printf("Finish\n");
  return 0;
}
void one_third(void){
  printf("one\n");
  two();
  printf("three\n");
}
void two(void) {
  printf("two\n");
}
