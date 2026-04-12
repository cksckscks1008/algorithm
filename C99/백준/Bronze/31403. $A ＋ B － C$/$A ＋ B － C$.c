#include <stdio.h>

int main(void) {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", A + B - C);

    int mid;
    if (B < 10)
        mid = A * 10 + B;
    else if (B < 100)
        mid = A * 100 + B;
    else if (B < 1000)
        mid = A * 1000 + B;
    else
        mid = A * 10000 + B;

    printf("%d\n", mid - C);

    return 0;
}