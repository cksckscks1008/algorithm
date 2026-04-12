#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count[10001] = {0};  // 1~10000까지

    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num);
        count[num]++;   // 등장 횟수 증가
    }

    for (int i = 1; i <= 10000; i++) {
        while (count[i]--) {
            printf("%d\n", i);
        }
    }

    return 0;
}