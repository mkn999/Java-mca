#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Function to return precedence of operators
int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

// Function to push operator onto the stack
void push(char op) {
    top++;
    stack[top] = op;
}

// Function to pop operator from the stack
char pop() {
    char temp = stack[top];
    top--;
    return temp;
}

// Function to check if the stack is empty
int empty() {
    return top == -1;
}

// Function to convert infix to postfix
void infixToPostfix(char infix[]) {
    for (int i = 0; infix[i] != '\0'; i++) {
        char current = infix[i];
        
        if (isalpha(current)) {
            // Print operands (characters) directly
            printf("%c", current);
        }
        else if (current == '(') {
            // Push left parenthesis onto the stack
            push(current);
        }
        else if (current == ')') {
            // Pop operators until a left parenthesis is found
            while (!empty() && stack[top] != '(') {
                printf("%c", pop());
            }
            pop(); // Discard the '('
        }
        else { // Operator
            // Pop operators with higher or equal precedence from the stack
            while (!empty() && precedence(current) <= precedence(stack[top])) {
                printf("%c", pop());
            }
            // Push the current operator onto the stack
            push(current);
        }
    }
    
    // Pop all remaining operators from the stack
    while (!empty()) {
        printf("%c", pop());
    }
}

int main() {
    char infix[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    printf("Postfix expression: ");
    infixToPostfix(infix); // Convert infix to postfix and print
    return 0;
}
