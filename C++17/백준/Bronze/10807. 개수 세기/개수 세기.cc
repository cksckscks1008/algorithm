#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int arr[n];
    int v;
    int count=0;
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &v);
       for(int i=0; i<n; i++) {
           if(arr[i]==v) count++;
       }
    printf("%d", count);
    return 0;
}