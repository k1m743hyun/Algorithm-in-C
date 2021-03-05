#include <math.h>

int solution(int n) {
    int len = (int)(log10(n) / log10(3)) + 1;
    int numArr[len];
    for (int i = 0; i < len; i++) {
        numArr[i] = (int)(n % 3);
        n /= 3;
    }
    int answer = 0;
    for (int j = len - 1; j > -1; j--) {
        answer += numArr[j] * pow(3, len - (j + 1));
    }
    return answer;
}