#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack Overflow. Cannot push %d onto the stack.\n", value);
    } else {
        stack[++top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

void pop() {
    if (top < 0) {
        printf("Stack Underflow. No element to pop.\n");
    } else {
        int poppedValue = stack[top--];
        printf("Popped %d from the stack.\n", poppedValue);
    }
}

void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, value;
    
    while (1) {
        printf("\n--- Stack Operations ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;
                
            case 2:
                pop();
                break;
                
            case 3:
                display();
                break;
                
            case 4:
                printf("Exiting...\n");
                exit(0);
                
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    
    return 0;
}