#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void) {
  int n = 0;
  scanf("%d\n", &n);

  int times[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &times[i]);
  }

  int result = 0;
  int temp = 0;

  qsort(times, sizeof(times) / sizeof(int), sizeof(int), compare);

  for (int j = 0; j < n; j++) {
    temp += times[j];
    result += temp;
  }

  printf("%d\n", result);
}

int compare(const void *a, const void *b)
{
    int num1 = *(int *)a;
    int num2 = *(int *)b;

    if (num1 < num2)
        return -1;
    if (num1 > num2)
        return 1;
    return 0;
}