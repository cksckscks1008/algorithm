#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int count = 1;
    int range = 1;

    while (N > range) {
        range += 6 * count;
        count++;
    }

    printf("%d", count);

    return 0;
}
