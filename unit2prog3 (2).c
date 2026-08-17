/* 3. Print a string in reverse order using a stack. */
#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    top++;
    stack[top] = ch;
}

char pop() {
    char ch;
    if (top == -1) {
        return '\0';
    }
    ch = stack[top];
    top--;
    return ch;
}

int main() {
    char str[MAX];
    int i, len;

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    /* remove trailing newline captured by fgets, if present */
    len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    /* push every character of the string onto the stack */
    for (i = 0; i < len; i++) {
        push(str[i]);
    }

    /* pop each character to get the string in reverse order */
    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");

    return 0;
}
