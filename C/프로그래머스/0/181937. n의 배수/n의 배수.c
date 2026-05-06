#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int n) {
    int answer = 0;
    if((num%n)==0) answer = 1;
    else if((num%n)==1) answer = 0;
    return answer;
}

int main(void) {
    int num,n;
    scanf("%d %d", &num, &n);
    
    printf("%d", solution(num, n));
}