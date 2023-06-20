#include <stdio.h>
#include <string.h>

int stack[10000] = {0};
int size = -1;

void push(int number) {
    stack[++size] = number;
}

int pop() {
    if (size < 0) {
        return -1;
    } else {
        return stack[size--];
    }
}

void Printsize() {
    printf("%d\n", size + 1);
}

int empty() {
    if (size == -1) {
        printf("%d\n", 1);
    } else {
        printf("%d\n", 0);
    }
}

void printTop() {
    if (size == -1) {
        printf("%d\n", -1);
    } else {
        printf("%d\n", stack[size]);
    }
}

int main() {
    int order = 0;
    scanf("%d", &order);
    char order_string[10];
    int num, val;

    for (int i = 0; i < order; i++) {
        scanf("%s", order_string);
        if (strcmp(order_string, "push") == 0) {
            scanf("%d", &num);
            push(num);
        } else if (strcmp(order_string, "pop") == 0) {
            val = pop();
            printf("%d\n", val);
        } else if (strcmp(order_string, "size") == 0) {
            Printsize();
        } else if (strcmp(order_string, "empty") == 0) {
            empty();
        } else if (strcmp(order_string, "top") == 0) {
            printTop();
        }
    }

    return 0;
}
