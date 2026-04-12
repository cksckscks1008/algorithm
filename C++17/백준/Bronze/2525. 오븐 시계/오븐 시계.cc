#include <stdio.h>
int main(void) {
    int a,b,c;
    scanf("%d %d", &a, &b);
    scanf("%d", &c);
    int time;
    int min;
    time=c/60;
    min=c%60;
    
    int when=a+time;
    int nowmin=b+min;
    
    if(nowmin>=60) {
        nowmin=nowmin-60;
        when++;
    }
     if(when>=24) {
         when=when-24;
     }
    
    printf("%d %d", when, nowmin);
    return 0;
}