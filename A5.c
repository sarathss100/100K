#include <stdio.h>
#include <stdlib.h>

int main(void) {

  float totalmark;
  printf("Please enter your mark percentage : ");
  scanf("%f", &totalmark);

  if(totalmark >= 90 && totalmark <= 100) {
    printf("Your Grade is 'A'");
  } else if (totalmark >= 80 && totalmark < 90) {
    printf("Your Grade is 'B'");
  } else if (totalmark >= 70 && totalmark < 80) {
    printf("Your Grade is 'C'");
  } else if (totalmark >= 60 && totalmark < 70) {
    printf("Your Grade is 'D'");
  } else if (totalmark >= 50 && totalmark < 60) {
    printf("Your Grade is 'E'");
  } else if (totalmark < 50) {
    printf("You are Failed!");
  } else {
    printf("Please enter correct percentage!");
  }

  return EXIT_SUCCESS;
}