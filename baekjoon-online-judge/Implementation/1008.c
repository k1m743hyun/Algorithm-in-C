#include <stdio.h>

int main() {
    double a, b = 0;
    scanf("%lf %lf", &a, &b);
    printf("%.10lf", a / b);
    return 0;
}