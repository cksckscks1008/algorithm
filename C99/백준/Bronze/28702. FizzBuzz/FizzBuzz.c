#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isNumber(char *s) {
    for(int i = 0; s[i]; i++) {
        if(s[i] < '0' || s[i] > '9')
            return 0;
    }
    return 1;
}

int main(void) {
    char s[3][20];
    int number = 0;

    for(int i = 0; i < 3; i++) {
        scanf("%s", s[i]);
    }

    for(int i = 0; i < 3; i++) {
        if(isNumber(s[i])) {
            number = atoi(s[i]) + (3 - i);
        }
    }

    if(number % 3 == 0 && number % 5 == 0)
        printf("FizzBuzz\n");
    else if(number % 3 == 0)
        printf("Fizz\n");
    else if(number % 5 == 0)
        printf("Buzz\n");
    else
        printf("%d\n", number);

    return 0;
}