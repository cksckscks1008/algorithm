#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum = 0;
    int times = num_list[0];
    for (int i=0; i<num_list_len; i++) {
        sum += num_list[i];
    }
    sum *= sum;
    
    for (int i=1; i<=num_list_len-1; i++) {
        int x = num_list[i];
        int y = x;
        times *= y;
    }
    if(sum>times) answer = 1;
    else if(sum<times) answer = 0;
    return answer;
}
