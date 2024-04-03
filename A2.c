#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int num1;
  float num2, sum;
  printf("Please enter two numbers : \n");
  scanf("%d%f", &num1, &num2);
  sum = num1 + num2;

  printf("Sum of two numbers is : %f", sum);
  return EXIT_SUCCESS;
}