#include <stdio.h>
int main(void) {
    int a,b,c;
    int cash=0;
    scanf("%d %d %d", &a, &b, &c);
    
    if(a==b&&b==c) {
        cash=10000+1000*a;
    } else if(a==b||a==c) {
        cash=1000+a*100;
    } else if(b==c) {
        cash=1000+b*100;
    }
    else {
        int max=a;
        if(b>max) max=b;
        if(c>max) max=c;
        cash=max*100;
    }
    
    printf("%d", cash);
    
    return 0;
}