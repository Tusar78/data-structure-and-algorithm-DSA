#include <stdio.h>

// int main()
// {
//   int i, j, n, count;
//   printf("Enter your number: ");
//   scanf("%d", &n);
//   count = 0;
//   for (i = 0; i < n; i++)
//   {
//     for (j = 0; j < n; j++)
//     {
//       count += 1;
//     }
//   }

//   for (i = 0; i < n; i++)
//   {
//     count += 1;
//   }
  
//   printf("You are entered: %d\nCounted value: %d", n, count);
  
//   return 0;
// }

// Time Complexity ⭕ big O(1) 😚
// int main() {
//   int n1, n2, result;
//   n1 = 10;
//   n2 = 20;
//   result = n1 + n2;
//   printf("Your result is: %d", result);

//   return 0;
// }

// Time Complexity big ⭕ O(n) 😏;
int main() {
  int i, n, result;
  printf("Enter you number: ");
  scanf("%d", &n);
  result = 0;
  for (i = 0; i <= n; i++){
    result += i;
  }
  printf("Your result is: %d", result);
}
