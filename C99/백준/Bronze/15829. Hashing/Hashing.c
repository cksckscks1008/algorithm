#include <stdio.h>

int main(void) {
    int L;
    char s[51];
    long long hash = 0;
    long long r = 1;   // 31^i 역할
    long long M = 1234567891;
    
    scanf("%d", &L);
    scanf("%s", s);
    
    for(int i = 0; i < L; i++) {
        int value = s[i] - 'a' + 1;
        hash = (hash + value * r) % M;
        r = (r * 31) % M;
    }
    
    printf("%lld\n", hash);
    
    return 0;
}