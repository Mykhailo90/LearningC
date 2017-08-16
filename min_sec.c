// min_sec.c -- programm translate sec to min and seconds

#include<stdio.h>
#define SEC_PER_MIN 60;
int main(void) {
  int min, sec, left;
  printf("Input time in sec(<= 0 to exit):\n");
  scanf("%d", &sec);
  while (sec > 0) {
  min = sec/SEC_PER_MIN;
  left = sec%SEC_PER_MIN;
  printf("Your time consist from %d min and %d sec.\n", min, left);
  printf("Input next value: \n");
  scanf("%d", &sec);
  }  
  return 0;
}
