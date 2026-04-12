#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int arr[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(int i = 0; i < N; i++) {
        int num = arr[i];
        int isPrime = 1;

        if(num < 2) continue;

        for(int j = 2; j * j <= num; j++) {
            if(num % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if(isPrime) count++;
    }

    printf("%d", count);

    return 0;
}