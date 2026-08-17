/* 1. Implement stack using array with operations:
      push, pop, print, peek, peep, change, exit. */
#include <stdio.h>

#define MAX 10

int stack[MAX];
int top = -1;

void push() {
    int value;
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push.\n");
        return;
    }
    printf("Enter value to push: ");
    scanf("%d", &value);
    top++;
    stack[top] = value;
    printf("%d pushed onto the stack.\n", value);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
        return;
    }
    printf("Popped value: %d\n", stack[top]);
    top--;
}

void print() {
    int i;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void peek() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

/* peep: view an element at a given position from the top
   without removing it (position 1 = top element) */
void peep() {
    int pos, index;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Enter position from top to peep (1 = top): ");
    scanf("%d", &pos);
    index = top - pos + 1;
    if (pos < 1 || index < 0) {
        printf("Invalid position.\n");
        return;
    }
    printf("Element at position %d from top: %d\n", pos, stack[index]);
}

/* change: modify the value at a given position from the top */
void change() {
    int pos, index, newValue;
    if (top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Enter position from top to change (1 = top): ");
    scanf("%d", &pos);
    index = top - pos + 1;
    if (pos < 1 || index < 0) {
        printf("Invalid position.\n");
        return;
    }
    printf("Enter new value: ");
    scanf("%d", &newValue);
    stack[index] = newValue;
    printf("Value at position %d changed to %d.\n", pos, newValue);
}

int main() {
    int choice;

    do {
        printf("\n----- Stack Menu -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Peek\n");
        printf("5. Peep\n");
        printf("6. Change\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: push();  break;
            case 2: pop();   break;
            case 3: print(); break;
            case 4: peek();  break;
            case 5: peep();  break;
            case 6: change();break;
            case 7: printf("Exiting program.\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}
