#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char letter;
  printf("Please enter a character : \n");
  scanf("%c",&letter);
  
  printf("You have entered : %c", letter);
  return EXIT_SUCCESS;
}