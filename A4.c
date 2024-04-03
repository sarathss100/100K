#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float mark;
  printf("Please enter your mark to check : ");
  scanf("%f", &mark);

  if(mark >= 50) {
    printf("You are Passed!");
  } else {
    printf("You are Failed!");
  }

  return EXIT_SUCCESS;
}