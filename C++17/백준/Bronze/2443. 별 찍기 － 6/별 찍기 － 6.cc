#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);

    for(int i=n; i>=1; i--) {
         
        for(int j=1; j<=n-i; j++) {
            printf(" ");
        }
        
        for(int k=0; k<i*2-1; k++) {
            printf("*");
        }
        
       
            if(i>=1) printf("\n");
    }
}