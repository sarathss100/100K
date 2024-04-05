#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int arr1[100][100], arr2[100][100], i, j, size, sum;

    printf("Please enter the size of arrays : ");
    scanf("%d", &size);

    printf("Please enter values of array 1 : \n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size;  j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Please enter values of array 2 : \n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size;  j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Sum of 2 arrays is: \n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size;  j++) {
            sum = arr1[i][j] + arr2[i][j];
            printf("%d ", sum);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}