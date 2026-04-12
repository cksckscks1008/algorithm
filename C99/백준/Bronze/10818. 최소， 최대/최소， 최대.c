#include <stdio.h>
int main(void) {
    int N; 
    scanf("%d", &N);
    
    int num;
    scanf("%d", &num);
    
    int min=num;
    int max=num;
    
    for(int i=1; i<N; i++) {
        scanf("%d", &num);
        
        if(num<min)
            min=num;
        if(num>max)
            max=num;
    }
    printf("%d %d", min, max);
    
    return 0;
}