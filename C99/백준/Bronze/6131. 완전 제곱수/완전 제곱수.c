#include <stdio.h>
int main(void) {
    int n=0;
    scanf("%d", &n);
    int count=0;
    for(int i=1; i<=500; i++) {
        for(int j=i; j<=500; j++) {
            if(j*j==i*i+n) {
                count++;
                           }
                
        }
    }
    printf("%d", count);
}