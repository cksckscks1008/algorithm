#include <stdio.h>
#include <string.h>

int main(void) {
    char s[14];
    scanf("%s", s);

    int sum = 0;
    int starIndex = -1;

    for(int i = 0; i < 13; i++) {
        if(s[i] == '*') {
            starIndex = i;
            continue;
        }

        int num = s[i] - '0';

        if(i % 2 == 0)
            sum += num;
        else
            sum += num * 3;
    }

    for(int x = 0; x <= 9; x++) {
        int temp = sum;

        if(starIndex % 2 == 0)
            temp += x;
        else
            temp += x * 3;

        if(temp % 10 == 0) {
            printf("%d\n", x);
            break;
        }
    }

    return 0;
}