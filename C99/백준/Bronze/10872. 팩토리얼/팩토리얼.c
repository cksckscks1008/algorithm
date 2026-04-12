#include <stdio.h>
int main(void) {
    int n;
    int sum;
    scanf("%d", &n);
    
    if(n==0) {
        printf("1");
    } else {
        sum=n;
    n--;
    while(n!=0) {
        sum*=n;
            n--;
    }
    printf("%d", sum);
    }
    return 0;
}