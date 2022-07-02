#include <stdio.h>

int main()
{
  int i, j, n, count;
  printf("Enter your number: ");
  scanf("%d", &n);
  count = 0;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      count += 1;
    }
  }

  for (i = 0; i < n; i++)
  {
    count += 1;
  }
  
  printf("You are entered: %d\nCounted value: %d", n, count);
  
  return 0;
}