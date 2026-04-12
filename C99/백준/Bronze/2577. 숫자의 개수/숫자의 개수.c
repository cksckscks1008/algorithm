#include <stdio.h>

int main(void) {
    int A, B, C;
    int count[10] = {0};

    scanf("%d %d %d", &A, &B, &C);

    int result = A * B * C;

    while (result > 0) {
        count[result % 10]++;  // 마지막 자리 숫자 카운트
        result /= 10;          // 한 자리 제거
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]);
    }

    return 0;
}