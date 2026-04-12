#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n];

    for(int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    for(int i = 0; i < m; i++) {
        int j, k;
        scanf("%d %d", &j, &k);

        j--;
        k--;

        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}