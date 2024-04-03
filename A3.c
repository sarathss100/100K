#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int P;
  float R, n, SI;
  printf("Please enter Principal amount : ");
  scanf("%d", &P);
  printf("Please enter Interest rate : ");
  scanf("%f", &R);
  printf("Please enter Number of years : ");
  scanf("%f", &n);

  SI = (P * R * n) / 100;
  printf("Simple Interest is : %f", SI);

  return EXIT_SUCCESS;
}
