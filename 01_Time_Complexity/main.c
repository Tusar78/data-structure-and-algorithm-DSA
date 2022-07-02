#include <stdio.h>

// Example one of BIG O(1).
/*
int main()
{
  int x, y, result;
  x = 10;
  y = 20;
  result = x + y;
  printf("Your result is: %d", result);
  return 0;
}
*/

// Example two of BIG O(n). showing shomantor dhara rules: n * ( n + 1 ) / 2

int main() {
  int n, result;
  printf("Enter your number: ");
  scanf("%d", &n);
  result = (n * ( n + 1 )) / 2;
  printf("Your result is: %d", result);
}