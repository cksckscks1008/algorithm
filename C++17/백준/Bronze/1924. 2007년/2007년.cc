#include <stdio.h>

int main(void) {
    int x, y, day = 0;
    scanf("%d %d", &x, &y);

    switch(x) {
        case 1:  day = 0;   break;
        case 2:  day = 31;  break;
        case 3:  day = 59;  break;
        case 4:  day = 90;  break;
        case 5:  day = 120; break;
        case 6:  day = 151; break;
        case 7:  day = 181; break;
        case 8:  day = 212; break;
        case 9:  day = 243; break;
        case 10: day = 273; break;
        case 11: day = 304; break;
        case 12: day = 334; break;
    }

    day += y;
    day %= 7;

    switch(day) {
        case 1: printf("MON"); break;
        case 2: printf("TUE"); break;
        case 3: printf("WED"); break;
        case 4: printf("THU"); break;
        case 5: printf("FRI"); break;
        case 6: printf("SAT"); break;
        case 0: printf("SUN"); break;
    }

    return 0;
}