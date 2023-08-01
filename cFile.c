#include <stdio.h>

int main(void) {

  int a;
  int b;

  printf("Enter a number:- ");
  scanf("%d", &a);

  printf("Enter another number:- ");
  scanf("%d", &b);

  int c;
  c = a + b;
  printf("\n The sum of %d and %d is %d", a, b, c);

  int product;
  product = a * b;
  printf("\n The Product of %d and %d is: %d", a, b, product);
}
