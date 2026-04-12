#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    int ans;

    scanf("%d", &N);

    if (N >= 1 && N <= 15){
        ans = pow((pow(2,N)+1),2);
        printf("%d",ans);
    }
    return 0;
}