#include <stdio.h>
#include <string.h>

int main(void) {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    int res = 0;
    int continuous = 0;
    char answer[81];
    scanf("%s", answer);
    for (int j = 0; j < strlen(answer); j++) {
      if (answer[j] == 'O') {
        continuous += 1;
      }
      else {
        continuous = 0;
      }
      res += continuous;
    }
    printf("%d\n", res);
  }
}