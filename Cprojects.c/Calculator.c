#include <stdio.h>

int main() {
    char operator;
    double num1;
    double num2;
    double result;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  

    printf("Enter number one: ");
    scanf("%lf", &num1);  

    printf("Enter number two: ");
    scanf("%lf", &num2);  

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nResult: %lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nResult: %lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nResult: %lf\n", result);
            break;
        case '/':
            if (num2 != 0) {  
                result = num1 / num2;
                printf("\nResult: %lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("'%c' is not a valid operator.\n", operator);
    }

    return 0;
}
