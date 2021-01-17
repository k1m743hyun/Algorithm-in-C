#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    int cash[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &cash[i]);
    }
    
    int result = 0;
    for (int j = n - 1; j >= 0; j--){
        result += k / cash[j];
        k = k % cash[j];
    }
    
    printf("%d\n", result);
    return 0;
}