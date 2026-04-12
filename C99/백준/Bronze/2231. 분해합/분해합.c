#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int result = 0;

    for(int i = 1; i < N; i++) {
        int sum = i;
        int temp = i;

        while(temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if(sum == N) {
            result = i;
            break;
        }
    }

    printf("%d", result);

    return 0;
}
