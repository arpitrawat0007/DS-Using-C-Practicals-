#include <cstdio>
#include <cstdlib>
#include <cctype>

#define MAX_SIZE 100

// Function to perform arithmetic operations
int performOperation(char oper, int operand1, int operand2) {
    switch (oper) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            return operand1 / operand2;
        default:
            printf("Error: Invalid operator\n");
            exit(EXIT_FAILURE);
    }
}

// Function to evaluate postfix expression
int evaluatePostfix(char postfix[]) {
    int stack[MAX_SIZE];
    int top = -1;

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            stack[++top] = postfix[i] - '0';
        } else {
            int operand2 = stack[top--];
            int operand1 = stack[top--];
            int result = performOperation(postfix[i], operand1, operand2);
            stack[++top] = result;
        }
    }

    return stack[top];
}

int main() {
    char postfix[MAX_SIZE];

    printf("Enter postfix expression: ");
    fgets(postfix, MAX_SIZE, stdin);

    int result = evaluatePostfix(postfix);

    printf("Result: %d\n", result);

    return 0;
}
