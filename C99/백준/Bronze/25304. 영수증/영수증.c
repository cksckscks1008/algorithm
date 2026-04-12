#include <stdio.h>

int main(void) {
    int x, n;
    scanf("%d %d", &x, &n);

    for(int i=0; i<n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        x -= a * b;
    }

    if(x == 0) printf("Yes");
    else printf("No");

    return 0;
}