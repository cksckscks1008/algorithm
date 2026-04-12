#include <stdio.h>

int main() {
    char s[1000001];
    int count = 0;

    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ' && s[i] != '\n' &&
            (i == 0 || s[i - 1] == ' ')) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}