#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int i=0;
    if(n%2 != 0) {
        answer = 0;
        while(i<=n) {
            if(i%2 != 0) {
                answer += i;
            }
            i++;
        }
    }
    
    if(n%2 == 0) {
        answer = 0;
        while(i<=n) {
            if(i%2 == 0) {
                answer += i*i;
            }
            i++;
        }
    }
    return answer;
}

int main(void) {
    int n;
    scanf("%d", &n);
    
    printf("%d", solution(n));
    }