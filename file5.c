// file5.c --experimental programm

#include <stdio.h>
void smile(void);
int main(void) {
  for (int k = 3; k > 0; k--) {
      for (int i = k; i > 0; i--) {
         smile();
      }
      printf("\n");
   }
  return 0;
}
void smile(void){
  printf("You have to smile! ");
}
