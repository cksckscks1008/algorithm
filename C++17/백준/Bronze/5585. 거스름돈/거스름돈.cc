#include <stdio.h>
int main(void) {
    int n,count=0;
    scanf("%d", &n);

    int cash = 1000 - n;

        
        if(cash>=500) {count += (cash/500);
        cash %= 500; }

    if(cash>=100) {count += (cash/100);
        cash %= 100; }

     if(cash>=50) {count += (cash/50);
        cash %= 50; }

     if(cash>=10) {count += (cash/10);
        cash %= 10; }

     if(cash>=5) {count += (cash/5);
        cash %= 5; }

     if(cash>=1) {count += (cash/1);
        cash %= 1; }

    
    

    printf("%d", count);
        
}