#include <stdio.h>
int main(void) {
    int a,b;
    
    scanf("%d %d", &a, &b);
    if(0<a&&0<b) {
        printf("1");
    } else if(a<0&&0<b) {
        printf("2");
    } else if(a<0&&b<0) {
        printf("3");
    } else {
        printf("4");
    }
    return 0;
}