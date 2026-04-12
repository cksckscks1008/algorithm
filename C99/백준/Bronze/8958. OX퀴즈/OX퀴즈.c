#include <stdio.h>
#include <string.h>
int main(void) {
    int n;
    scanf("%d", &n);
    
    char arr[81];
    int count;
    int result;
    for(int i=0; i<n; i++) {
        scanf("%s", arr);
    result=0;
        count=0;
    for(int i=0; i<strlen(arr); i++) {
        if(arr[i]=='O'){
            count++;
                result+=count;
        }
        else
            count=0;
    }
        printf("%d\n", result);
    }
}