#include <stdio.h>

int main(void) {
    int n = 0;
    
    while(1) {
        scanf("%d", &n);
        if(n == 0) break;
        
        int cench = 1; 
        int temp = n; 
        
        while(temp > 0) {
            int digit = temp % 10; 
            
            if(digit == 1) cench += 2;
            else if(digit == 0) cench += 4;
            else cench += 3;
            
            cench += 1; 
            temp = temp / 10; 
        }
        
        printf("%d\n", cench);
    }
    
    return 0;
}