#include <stdio.h>

int main() {
    float a;
    float b;
    char op;
    printf("Enter the first number : ");
    scanf("%f", &a);
    printf("Enter the second number : ");
    scanf("%f", &b);
    printf("Enter the operator : ");
    scanf(" %c", &op);

    if (op == '+')
    {
        printf("%f", a + b);
    }else if (op == '-')
    {
        printf("%f", a - b);
    }else if (op == '*')
    {
        printf("%f", a * b);
    }else if (op == '/')
    {
        printf("%f", a / b);
    }else
    {
        printf("Invalid operator");
    }
    return 0;
}