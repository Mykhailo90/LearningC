#include <stdio.h>
int main(void) {
  int dogs;
  printf("How meny dogs do you have?\n");
  scanf("%d", &dogs);
  printf("Ok! You have %d dogs in your family\n", dogs);
  getchar();
  return 0;
}
