#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) 
{
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int flag = 0;
    int cnt = 0;
    int* tempArr = (int*)malloc(sizeof(int) * numbers_len * numbers_len);
    for (int i = 0; i < (int)numbers_len; i++) {
        for (int j = i + 1; j < (int)numbers_len; j++) {
            for (int k = 0; k < cnt; k++) {
                if (tempArr[k] == numbers[i] + numbers[j]) {
                    flag = 1;
                }
            }
            if (flag == 1) {
                flag = 0;
                continue;
            }
            tempArr[cnt++] = numbers[i] + numbers[j];
        }
    }
    
    int tempNum = 0;
    for (int x = 0; x < cnt; x++) {
        for (int y = x + 1; y < cnt; y++) {
            if (tempArr[x] > tempArr[y]) {
                tempNum = tempArr[x];
                tempArr[x] = tempArr[y];
                tempArr[y] = tempNum;
            }
        }
    }

    int* answer = (int*)malloc(sizeof(int) * cnt);
    for (int z = 0; z < cnt; z++)
        answer[z] = tempArr[z];

    return answer;
}