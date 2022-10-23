#include <stdio.h>
#include <stdlib.h>

int main() {
    double num1, num2;
    char op;
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Enter operator: ");
    scanf(" %c", &op);

    if (op == '+')
        printf("%lf\n", num1 + num2);
    else if (op == '-')
        printf("%lf\n", num1 - num2);
    else if (op == '*')
        printf("%lf\n", num1 - num2);
    else if (op == '/')
        printf("%lf\n", num1 - num2);
    else
        printf("Invalid operator\n");

    return 0;
}