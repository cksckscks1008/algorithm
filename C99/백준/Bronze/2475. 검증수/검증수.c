#include <stdio.h>
int main(void) {
    int t, n=0;
    
    for(int i=0; i < 5; i++) {
        scanf("%d", &t);
        n += t*t;
    }
    
    n %= 10;
    
    printf("%d", n);
    
    return 0;
    
}