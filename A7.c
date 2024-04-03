#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int num, i, result;
  printf("Please enter a number : ");
  scanf("%d", &num);

  for(i = 1; i <= 10; i++) {
    result = i * num;
    printf("%d x %d = %d\n", i, num, result);
  }

  return EXIT_SUCCESS;
}