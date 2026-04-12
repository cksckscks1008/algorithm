#include <stdio.h>
int main(void) {
    int a[42]={0};
    int x, cnt=0;
    
    for(int i=0; i<10; i++) {
        scanf("%d", &x);
        a[x%42]=1;
    }
    
for(int i=0; i<42; i++) {
    if(a[i]==1)
        cnt++;
}
    printf("%d", cnt);
    return 0;
}