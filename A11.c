#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int limit, i, a[1000], count = 0;
  printf("Please enter the size of an array : \n");
  scanf("%d", &limit);
  
  printf("Please enter the values of array : \n");
  for(i = 0; i < limit; i++) {
    scanf("%d", &a[i]);
  }

  for(i = 0; i < limit; i++) {
    if(a[i] % 2 == 0) {
      count++;
    }
  }

  printf("Number of even numbers in the given array is %d", count);

  return EXIT_SUCCESS;
}