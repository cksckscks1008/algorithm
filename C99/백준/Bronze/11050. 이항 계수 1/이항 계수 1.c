#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main(void) {
    int N, K;
    scanf("%d %d", &N, &K);

    int answer = factorial(N) / 
                (factorial(K) * factorial(N - K));

    printf("%d\n", answer);

    return 0;
}