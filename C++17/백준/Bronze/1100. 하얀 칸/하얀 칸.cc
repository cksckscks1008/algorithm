#include <stdio.h>

int main(void) {
    char arr[8][9];
    int count = 0;

    for (int i = 0; i < 8; i++) {
        scanf("%8s", arr[i]);
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && arr[i][j] == 'F') {
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}