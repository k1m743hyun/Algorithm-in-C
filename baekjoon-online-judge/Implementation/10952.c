#include <stdio.h>

int main(void) {
  int a, b;

  do {
    scanf("%d %d", &a, &b);

    if (a + b == 0) {
      break;
    }
    printf("%d\n", a + b);
  } while (1);
}