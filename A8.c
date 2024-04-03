#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int limit, i, sum = 0;
  printf("Please enter a limit : ");
  scanf("%d", &limit);
  
  for(i = 1; i <= limit; i++) {
    if(i == 1 || i % 2 != 0) {
      sum += i;
    }
  }

  printf("Sum of odd numbers = %d", sum);

  return EXIT_SUCCESS;
}