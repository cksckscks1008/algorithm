#include <stdio.h>
int main(void) {
int a,b,result;
scanf("%d\n%d", &a, &b);
int c=a*(b%10);
int d=a*((b%100)/10);
int e=a*(b/100);
result=a*b;
printf("%d\n", c);
printf("%d\n", d);
printf("%d\n", e);
printf("%d\n", result);
return 0;
}