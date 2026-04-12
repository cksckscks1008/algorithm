#include <stdio.h>

int swap(int n) {
    int a = 0;
    a += (n%10) * 100;
    n /= 10;
    a += (n%10) * 10;
    n /= 10;
    a += n;
    return a;
}

int main(void) {
      int fir, sec;
    scanf("%d %d", &fir, &sec);
    
    int one = swap(fir);
    int two = swap(sec);
    
    if(one>two) {
        printf("%d", one);
    } else if (two>one) {
        printf("%d", two);
    }
    return 0;
}