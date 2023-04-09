#include <stdio.h>

void collatz(int n)
{
  while (n != 1) {
    printf("%d ", n);
    if (n % 2 == 0) {
      n = n / 2;
    }
    else {
      n = 3 * n + 1;
    }
  }
  printf("%d\n", n);
}

int main()
{
  int n;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  collatz(n);
  return 0;
}
