#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Function to push an element onto the stack
void push(char c) {
    if (top < MAX - 1) {
        stack[++top] = c;
    }
}

// Function to pop an element from the stack
char pop() {
    if (top != -1)
        return stack[top--];
    return '\0';  // Return null character if stack is empty
}

// Function to return the precedence of operators
int precedence(char op) {
    switch(op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default:  return 0;
    }
}

// Function to convert infix expression to postfix expression
void infixToPostfix(char *exp) {
    char output[MAX];
    int i = 0, k = 0;
    char ch;
    
    while(exp[i] != '\0') {
        ch = exp[i];

        // If the character is an operand, add it to output.
        if(isalnum(ch)) {
            output[k++] = ch;
        }
        // If the character is '(', push it onto the stack.
        else if(ch == '(') {
            push(ch);
        }
        // If the character is ')', pop and output until '(' is found.
        else if(ch == ')') {
            while(top != -1 && stack[top] != '(') {
                output[k++] = pop();
            }
            if(top != -1 && stack[top] == '(')
                pop();  // Remove '(' from the stack
        }
        // If an operator is encountered
        else {
            while(top != -1 && precedence(ch) <= precedence(stack[top])) {
                output[k++] = pop();
            }
            push(ch);
        }
        i++;
    }
    
    // Pop any remaining operators from the stack
    while(top != -1) {
        output[k++] = pop();
    }
    
    output[k] = '\0';  // Terminate the string
    printf("Postfix Expression: %s\n", output);
}

int main() {
    char expression[MAX];
    printf("Enter an infix expression: ");
    
    // Using fgets to read the expression safely
    if(fgets(expression, MAX, stdin) != NULL) {
        // Remove newline character if present
        expression[strcspn(expression, "\n")] = '\0';
        infixToPostfix(expression);
    }
    return 0;
}