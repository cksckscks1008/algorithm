#include <stdio.h>
#include <string.h>

int main(void) {
    int n;
    scanf("%d", &n);

    char pattern[51]; 

    for(int i = 0; i < n; i++) {
        char arr[51];
        scanf("%s", arr);

        if (i == 0) {
            strcpy(pattern, arr); 
        } 
        
        else {
            
            for (int j = 0; j < strlen(pattern); j++) {
                if (pattern[j] != arr[j]) {
                    pattern[j] = '?';
                }
            }
        }
    }

    printf("%s\n", pattern);

    return 0;
}