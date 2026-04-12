#include <stdio.h>

int main(void) {
    int t, a, b, casha, cashb;
    scanf("%d", &t);

    for(int i=0; i<t; i++) {
        scanf("%d %d", &a, &b);
        casha = 0;
        cashb = 0;

        if(a == 0) casha = 0;
        else if(a == 1) casha = 5000000;
        else if(a >= 2 && a <= 3) casha = 3000000;
        else if(a >= 4 && a <= 6) casha = 2000000;
        else if(a >= 7 && a <= 10) casha = 500000;
        else if(a >= 11 && a <= 15) casha = 300000;
        else if(a >= 16 && a <= 21) casha = 100000;

     
        if(b == 0) cashb = 0;
        else if(b == 1) cashb = 5120000;
        else if(b >= 2 && b <= 3) cashb = 2560000;
        else if(b >= 4 && b <= 7) cashb = 1280000;
        else if(b >= 8 && b <= 15) cashb = 640000;
        else if(b >= 16 && b <= 31) cashb = 320000;

        printf("%d\n", casha + cashb);
    }
    return 0;
}
