#include <stdio.h>

int main(void) {
    char a[11];
    int n = 0;

    if (scanf("%s", a) == EOF) return 0;

    if (scanf("%d", &n) == EOF) return 0;

    for(int i = 0; i < n; i++) {
        printf("%s", a);
    }

    return 0;
}
