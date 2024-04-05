#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char word[100];
    int length, i, flag = 0;
    printf("Please enter a string : ");
    scanf("%s", word);

    length = strlen(word);

    for(i = 0; i < length / 2; i++) {
        if(word[i] != word[(length - i) - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        printf("Entered string is not a palindrome!");
    } else {
        printf("Entered string is a palindrome!");
    }

    return EXIT_SUCCESS;
}