#include <stdio.h>

int main(void) {
  int max = 0;
  int index = 0;
  int temp = 0;
  for (int i = 0; i < 9; i++) {
    scanf("%d", &temp);
    if (i == 0 || temp > max) {
      max = temp;
      index = i;
    }
  }
  printf("%d\n%d\n", max, index + 1);
}