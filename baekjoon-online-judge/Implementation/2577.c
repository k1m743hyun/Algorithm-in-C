#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);

  char charNum[10];
  sprintf(charNum, "%d", a * b * c);

  for (int i = 0; i < 10; i++) {
    int count = 0;
    int temp = atoi(charNum);
    for (int j = strlen(charNum); j > 0; j--) {
      if (temp % 10 == i) {
        count++;
      }
      temp /= 10;
    }
    printf("%d\n", count);
  }
}