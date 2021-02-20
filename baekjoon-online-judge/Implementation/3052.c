#include <stdio.h>

int main(void) {
  int temp = 0;
  int result[10];
  for (int i = 0; i < 10; i++) {
    scanf("%d", &temp);
    result[i] = temp % 42;
  }

  for (int j = 0; j < 10; j++) {
    for (int k = j + 1; k < 10; k++) {
      if (result[j] == -1) {
        break;
      }
      else if (result[j] == result[k]) {
        result[k] = -1;
      }
    }
  }

  int cnt = 0;
  for (int l = 0; l < 10; l++) {
    if (result[l] != -1) {
      cnt++;
    }
  }
  printf("%d\n", cnt);
}