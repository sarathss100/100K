#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int arr[86], i,m = 1, j = 2, k = 1;

    for(i = 0 ; i < 86; i++) {
        arr[i] = i + 1;
    }
    
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nArray after skipping two elements post an odd number:\n");

    
    for (i = 0; i < size; i++) {
        
        if (arr[i] % 2 != 0) {
            i += 2;
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    while (k <= 3) {
        for (int x = 0; x < m; x++) {
            if (x==(m-1)){
                for (int y = 0; y < j; y++) {
                    printf("%d ", a[]);
                }
            } 
            else{
                printf("*");
            }
            printf("\n");
        }
        m += 3;
        j += 2;
        k++;
    }

    return 0;
}


