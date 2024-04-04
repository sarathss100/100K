#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int limit, i, j, arr1[1000], arr2[1000];
  printf("Please enter the size of arrays : \n");
  scanf("%d", &limit);
   
  printf("Enter the values of Array 1 : \n");
  for(i = 0; i < limit; i++) {
    scanf("%d", &arr1[i]);
  }

  printf("Enter the values of Array 2 : \n");
  for(i = 0; i < limit; i++) {
    scanf("%d", &arr2[i]);
  }
   
  printf("Arrays after swapping : \n");
  
  for(i = 0; i < limit; i++) {
    for(j = 0; j < limit; j++) {
      if(i == j) {
        arr1[i] = arr1[i] + arr2[j];
        arr2[j] = arr1[i] - arr2[j];
        arr1[i] = arr1[i] - arr2[j];
      }
    }
  }

  printf("Array 1 : ");
  for(i = 0; i < limit; i++) {
    if(i == limit - 1) {
      printf("%d", arr1[i]);
    } else {
      printf("%d, ", arr1[i]);
    }
  }
  
  printf("\n");
  
  printf("Array 2 : ");
  for(i = 0; i < limit; i++) {
    if(i == limit - 1) {
      printf("%d", arr2[i]);
    } else {
      printf("%d, ", arr2[i]);
    }
  }

  return EXIT_SUCCESS;
}