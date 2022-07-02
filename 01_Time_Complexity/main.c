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

// Example two of BIG O(1). showing shomantor dhara rules: n * ( n + 1 ) / 2

// int main() {
//   int n, result;
//   printf("Enter your number: ");
//   scanf("%d", &n);
//   result = (n * ( n + 1 )) / 2;
//   printf("Your result is: %d", result);
// }

// Example three big O(n). using for loop

int main()
{
  int i, n, result;
  printf("Enter your number: ");
  scanf("%d", &n);
  result = 0;
  for (i = 0; i <= n; i++)
  {
    result += i;
  }
  printf("Your result is: %d", result);

  return 0;
}