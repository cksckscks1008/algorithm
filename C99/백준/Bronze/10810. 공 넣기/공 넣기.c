#include <stdio.h>
int main(void) {
    int n,m;
    int arr[101]={0, };
    
    scanf("%d %d", &n, &m);
    
    for(int i=0; i<m; i++) {
        int i,j,k;
        scanf("%d %d %d", &i, &j, &k);
        for(int q=i; q<=j; q++) {
            arr[q]=k;
        }
    }
    
    for(int i=1; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    
    
}