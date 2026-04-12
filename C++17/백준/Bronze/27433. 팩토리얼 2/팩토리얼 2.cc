#include <stdio.h>
int main(void) {
    long long int n,sum=1;
    
    scanf("%lld", &n);
    
    for(int i=1; i<=n; i++) {
        sum = sum*i;
    }
    printf("%lld", sum);
    
    return 0;
}