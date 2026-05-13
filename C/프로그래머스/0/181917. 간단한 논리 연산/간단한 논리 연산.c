#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    bool x12, x34;
    
    if(x1==true || x2==true) {
         x12 = true;
    } else {
         x12 = false;
    }
    
    if(x3==true || x4==true) {
         x34 = true;
    } else {
        x34 = false;
    }
    
    if(x12==true && x34==true) {
        answer = true;
    } else {
        answer = false;
    }
    
    return answer;
}

int main(void) {
    int x1,x2,x3,x4;
    
    scanf("%d %d %d %d", &x1, &x2, &x3, &x4);
    
    printf("%s", solution(x1, x2, x3, x4));
}