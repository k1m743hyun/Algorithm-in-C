#include <stdio.h>

void calculator(int*, int*, int);

int main(void) {
  int n;
  scanf("%d", &n);

  int res = 0;
  calculator(&n, &res, 5);

  if (n == 0) {
    printf("%d\n", res);
  }

  else {
    if (res > 0 && (n % 3) == 1) {
      n = n + 5;
      res = res - 1;
      calculator(&n, &res, 3);
      printf("%d\n", res);
    }

    else if (res > 1 && (n % 3) == 2) {
      n = n + 10;
      res = res - 2;
      calculator(&n, &res, 3);
      printf("%d\n", res);
    }

    else {
      calculator(&n, &res, 3);
      if (n == 0) {
        printf("%d\n", res);
      }

      else {
        printf("%d\n", -1);
      }
    }
  }
}

void calculator(int *n, int *res, int i) {
  *res += *n / i;
  *n = *n % i;
}