#include <stdio.h>
#include <string.h>
int main(void) {
    int t;
    scanf("%d", &t);
    
    for(int i=0; i<t; i++) {
        char arr[1001];
        scanf(" %s", arr);
        int len=strlen(arr);
        printf("%c%c\n", arr[0], arr[len-1]);
    }
        return 0;
    }