#include <stdio.h>

int main(void) {
    long long A, B, V;
    scanf("%lld %lld %lld", &A, &B, &V);

    long long day = (V - B - 1) / (A - B) + 1;

    printf("%lld\n", day);

    return 0;
}