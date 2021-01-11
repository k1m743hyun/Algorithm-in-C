#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  char input[51];
  scanf("%s", input);

  int result = 0;
  char *ptr = strtok(input, "-");

  char front[51];
  strcpy(front, ptr);
  
  if (ptr = strtok(NULL, "")) {
    char back[51];
    strcpy(back, ptr);
  
    char *ptrb = strtok(back, "+-");
    do {
      result -= atoi(ptrb);
    }
    while (ptrb = strtok(NULL, "+-"));
  }

  char *ptrf = strtok(front, "+");
  do {
    result += atoi(ptrf);
  } while (ptrf = strtok(NULL, "+"));

  printf("%d\n", result);
}