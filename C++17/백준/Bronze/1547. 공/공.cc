#include <stdio.h>
int main(void) {
    int arr[4] = {1, 0, 0, 0};
        int M;
    scanf("%d", &M);

    for(int i=0; i<M; i++) {
        int x=0; 
        int y=0;
        int temp=0;

        scanf("%d %d", &x, &y);

        temp = arr[x-1];
        arr[x-1] = arr[y-1];
        arr[y-1] = temp;
    }

    for(int i=0; i<3; i++) {
        if(arr[i] == 1) {
            printf("%d\n", i+1);
            break;
        }
    }
    return 0;
}