#include <stdio.h>

int main() {
    char S[101];
    int count[26] = {0};  // 알파벳 개수 저장 배열

    scanf("%s", S);

    for (int i = 0; S[i] != '\0'; i++) {
        count[S[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", count[i]);
    }

    return 0;
}