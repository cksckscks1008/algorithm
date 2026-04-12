#include <stdio.h>

int gcd(int a, int b) {
    while(b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main(void) {
    int A, B;
    scanf("%d %d", &A, &B);

    int G = gcd(A, B);
    int L = (A * B) / G;

    printf("%d\n", G);
    printf("%d\n", L);

    return 0;
}