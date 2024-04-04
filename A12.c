#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int size, i, j, a[1000];
  printf("Please enter the size of an array : \n");
  scanf("%d", &size);
  
  printf("Please enter the values of array : \n");
  for(i = 0; i < size; i++) {
    scanf("%d", &a[i]);
  }

  for(i = 0; i < size - 1; i++) {
    for(j = i + 1; j < size; j++) {
      if(a[i] < a[j]) {
        a[i] = a[i] + a[j];
        a[j] = a[i] - a[j];
        a[i] = a[i] - a[j];
      }
    }
  }

  printf("Sort array : ");
  for(i = 0; i < size; i++) {
    if(i == size -1) {
      printf("%d", a[i]);
    } else {
      printf("%d, ", a[i]);
    }
  }

  return EXIT_SUCCESS;
}