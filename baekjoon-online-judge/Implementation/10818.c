#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int min = 0;
  int max = 0;
  int temp = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    if (i == 0) {
      min = temp;
      max = temp;
    }

    else if (temp < min) {
      min = temp;
    }

    else if (temp > max) {
      max = temp;
    }
  }
  printf("%d %d\n", min, max);
}