#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int cmp = n;

  int count = 0;
  do {
    n = ((n % 10)) * 10 + ((n / 10) + (n % 10)) % 10;
    count++;
  }
  while (n != cmp);

  printf("%d\n", count);
}