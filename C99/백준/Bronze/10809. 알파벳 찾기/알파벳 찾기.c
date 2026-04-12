#include <stdio.h>

int main(void) {
    char s[101];
    int pos[26];

    for (int i = 0; i < 26; i++) {
        pos[i] = -1;
    }

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        int idx = s[i] - 'a';   

        if (pos[idx] == -1) {
            pos[idx] = i;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", pos[i]);
    }

    return 0;
}
