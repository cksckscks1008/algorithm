#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int size[6];
    for(int i = 0; i < 6; i++) {
        scanf("%d", &size[i]);
    }
    
    int T, P;
    scanf("%d %d", &T, &P);
    
    int shirt_box = 0;
    
    for(int i = 0; i < 6; i++) {
        shirt_box += (size[i] + T - 1) / T;
    }
    
    printf("%d\n", shirt_box);
    printf("%d %d\n", N / P, N % P);
    
    return 0;
}