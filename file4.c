// file4.c --programm show methods to use functions

#include <stdio.h>
void br(void);
void ik(void);
int main(void){
    br();
    printf(", ");
    ik();
    printf("\n");
    ik();
    printf(",\n");
    br();
  return 0;
}
void br(void){
  printf("Brazillia, Rassia");
}
void ik(void){
  printf("India, China");
}
