#include <stdio.h>

int calculate_piece(int required, int found) {
    return required - found;
}

int main(void) {
    int k, q, l, b, n, p;
    
    scanf("%d %d %d %d %d %d", &k, &q, &l, &b, &n, &p);
    
    printf("%d ", calculate_piece(1, k));
    printf("%d ", calculate_piece(1, q));
    printf("%d ", calculate_piece(2, l));
    printf("%d ", calculate_piece(2, b));
    printf("%d ", calculate_piece(2, n));
    printf("%d\n", calculate_piece(8, p));
    
    return 0;
}