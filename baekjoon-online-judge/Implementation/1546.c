#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);

  double max = 0;
  double li[n];
  for (int i = 0; i < n; i++) {
    scanf("%lf", &li[i]);
    if (li[i] > max) {
      max = li[i];
    }
  }

  double sum = 0;
  for (int j = 0; j < n; j++) {
    sum += li[j] / max * 100;
  }

  printf("%lf\n", sum / n);
}