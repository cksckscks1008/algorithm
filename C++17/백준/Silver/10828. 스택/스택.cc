#include <stdio.h>
#include <string.h>

int stk[10000];
int top = -1;

void push(int x) {
    stk[++top] = x;
}

void pop() {
    if (top == -1) printf("-1\n");
    else printf("%d\n", stk[top--]);
}

void tops() {
    if (top == -1) printf("-1\n");
    else printf("%d\n", stk[top]);
}

void size() {
    printf("%d\n", top + 1);
}

void empty() {
    if (top == -1) printf("1\n");
    else printf("0\n");
}

int main(void) {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char op[10];
        scanf("%s", op);

        if (strcmp(op, "push") == 0) {
            int x;
            scanf("%d", &x);
            push(x);
        } else if (strcmp(op, "pop") == 0) {
            pop();
        } else if (strcmp(op, "top") == 0) {
            tops();
        } else if (strcmp(op, "size") == 0) {
            size();
        } else if (strcmp(op, "empty") == 0) {
            empty();
        }
    }

    return 0;
}