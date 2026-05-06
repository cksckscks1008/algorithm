#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, bool flag) {
    int answer = 0;
    if(flag==true) answer = a+b;
    else if(flag==false) answer = a-b;
    return answer;
}

int main(void) {
    int a,b;
    bool flag;
    scanf("%d %d %d", &a, &b, &flag);
    solution(a,b,flag);
    }