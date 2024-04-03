#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int choice;
  printf("Please enter a number from 1 to 7 : ");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
            printf("It's Sunday!");
            break;
    case 2:
            printf("It's Monday!");
            break;
    case 3:
            printf("It's Tuesday!");
            break;
    case 4:
            printf("It's Wednesday!");
            break;
    case 5:
            printf("It's Thursday!");
            break;
    case 6:
            printf("It's Friday!");
            break;
    case 7:
            printf("It's Saturday!");
            break;
    default:
            printf("Invalid Entry!");
  }

  return EXIT_SUCCESS;
}