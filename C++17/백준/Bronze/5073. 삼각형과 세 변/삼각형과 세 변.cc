#include <stdio.h>

int main(void) {
    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) break;

        int max = a, sum = b + c;
        if (b > max) { max = b; sum = a + c; }
        if (c > max) { max = c; sum = a + b; }

        if (max >= sum) {
            printf("Invalid\n");
        } else if (a == b && b == c) {
            printf("Equilateral\n");
        } else if (a == b || b == c || a == c) {
            printf("Isosceles\n");
        } else {
            printf("Scalene\n");
        }
    }
    return 0;
}
