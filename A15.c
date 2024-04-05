#include <stdio.h>
#include <stdlib.h>

int getArray(int arr[]);
void displayArray(int arr[], int);

int main(void) {
    int arr[100], length;

    * arr, length = getArray(arr);

    displayArray(arr, length);
  
    return EXIT_SUCCESS;
}

int getArray(int arr[]) {
    int size, i;
    printf("Please enter array size : ");
    scanf("%d", &size);

    printf("Please enter array values : \n");
    for(i =0; i < size; i++) {  
        scanf("%d", &arr[i]);
    }

    return * arr, size;
}

void displayArray(int arr[], int size) {
    int i;
    printf("Array values are : \n");
    for(i = 0; i < size; i++) {
        if(size - 1 == i) {
            printf("%d ", arr[i]);
        } else {
            printf("%d, ", arr[i]);
        }
    }
}