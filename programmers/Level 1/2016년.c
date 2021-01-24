#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    int dom[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *dow[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
        
    int sum = 0;
    for (int i = 0; i < a - 1; i++) {
        sum += dom[i];
    }
    sum += b;

    return dow[(sum + 4) % 7];
}