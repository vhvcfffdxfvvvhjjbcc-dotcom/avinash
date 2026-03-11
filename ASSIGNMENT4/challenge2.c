#include <stdio.h>

// Function to perform calculation
double calculate(double a, double b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/':
            if (b == 0) {
                printf("? Error: Division by zero!\n");
                return 0;
            }
            return a / b;
        default:
            printf("? Invalid operator!\n");
            return 0;
    }
}

int main() {
    double num1, num2, result;
    char operator;

    printf("Simple Calculator\n");

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter operator (+ - * /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    result = calculate(num1, num2, operator);

    printf("Result: %.2lf\n", result);

    return 0;
}
