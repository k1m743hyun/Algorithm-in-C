#include <stdio.h>

int main(void) {
  int year;
  scanf("%d", &year);

  if (year % 4 == 0) {
    if(year % 100 != 0 || year % 400 == 0) {
      printf("%d\n", 1);
    }

    else {
      printf("%d\n", 0);
    }
  }

  else {
    printf("%d\n", 0);
  }
}