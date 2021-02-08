#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int result[n];

  int a, b;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &a, &b);
    result[i] = a + b;
  }

  for (int j = 0; j < n; j++) {
    printf("%d\n", result[j]);
  }
}