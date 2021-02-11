#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int a, b;
  for (int i = 1; i < n + 1; i++) {
    scanf("%d %d", &a, &b);
    printf("Case #%d: %d\n", i, a + b);
  }
}