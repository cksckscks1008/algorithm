#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int R;
        char S[21];
        
        scanf("%d %s", &R, S);

        for (int i = 0; S[i] != '\0'; i++) {   // 문자열 끝까지
            for (int j = 0; j < R; j++) {      // R번 반복
                printf("%c", S[i]);
            }
        }
        printf("\n");
    }

    return 0;
}