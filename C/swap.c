
#include<stdio.h>
int main() {
  int first, second, var;
  printf("Enter first number: ");
  scanf("%d", &first);
  printf("Enter second number: ");
  scanf("%d", &second);

  var = first;

  first = second;

  second = var;
  printf("After swapping.....\n");
  printf("First number = %.d\n", first);
  printf("Second number = %.d", second);
  return 0;
} 
