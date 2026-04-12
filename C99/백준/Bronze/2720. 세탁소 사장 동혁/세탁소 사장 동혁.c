#include <stdio.h>

 int devide(int cash) {
        int count25 = 0, count10 = 0, count5 = 0, count1 = 0;
        
        if(cash>=25) {
            count25 += (cash/25);
            cash %= 25; 
        } 

        if(cash>=10) {
            count10 += (cash/10);
            cash %= 10; 
        } 

        if(cash>=5) {
            count5 += (cash/5);
            cash %= 5; 
        } 

        if(cash>=1) {
            count1 += (cash/1);
            cash %= 1; 

          
        } 
    printf("%d %d %d %d\n", count25, count10, count5, count1);
    }

int main() {

    int t;

    scanf("%d", &t);

    for(int i=0; i<t; i++) {
        int cash = 0;
        scanf("%d", &cash);

        devide(cash);
    }

    return 0;
}