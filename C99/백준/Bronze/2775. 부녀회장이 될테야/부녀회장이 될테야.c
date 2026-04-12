#include <stdio.h>

int main(void) {
    int T;
    scanf("%d", &T);

    while(T--) {
        int k, n;
        scanf("%d", &k);
        scanf("%d", &n);

        int apt[15][15] = {0};

        // 0층 초기화
        for(int i = 1; i <= n; i++) {
            apt[0][i] = i;
        }

        // 점화식 적용
        for(int i = 1; i <= k; i++) {
            for(int j = 1; j <= n; j++) {
                apt[i][j] = apt[i][j-1] + apt[i-1][j];
            }
        }

        printf("%d\n", apt[k][n]);
    }

    return 0;
}