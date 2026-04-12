#include <stdio.h>
int main() {
    int n;
    long long cur=0, next=1, prev=0;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++) {
        prev = cur;
        cur = next;
        next = prev + cur;
    }
    printf("%lld", cur);
}