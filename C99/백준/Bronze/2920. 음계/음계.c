#include <stdio.h>

int main() {
    int arr[8];
    int ascending = 1;
    int descending = 1;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 7; i++) {
        if (arr[i] + 1 != arr[i + 1]) {
            ascending = 0;
        }
        if (arr[i] - 1 != arr[i + 1]) {
            descending = 0;
        }
    }

    if (ascending == 1) {
        printf("ascending");
    } else if (descending == 1) {
        printf("descending");
    } else {
        printf("mixed");
    }

    return 0;
}