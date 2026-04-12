#include <stdio.h>

int youngsik(int time) {
        return (time/30)*10+10;
    }

int minsik(int time) {
        return (time/60)*15+15;
    }

int main(void) {
    int n;
    int time;
    int Y=0,M=0;
    
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", &time);
        Y += youngsik(time);
        M += minsik(time);
    }
    
    if(Y>M) printf("M %d", M);
        else if(M>Y) printf("Y %d", Y);
        else printf("Y M %d", Y);
    
    return 0;
}