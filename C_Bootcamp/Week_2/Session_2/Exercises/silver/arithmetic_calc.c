#include <stdio.h>

float calculate(float number1, float number2, char *operation);

int main() 
{
    float number1;
    float number2;
    char *operation;
    printf("Enter a float: ");
    scanf("%f", &number1);
    printf("Enter a second float: ");
    scanf("%f", &number2);
    printf("Enter an arithmetic operation: ");
    scanf(" %c", operation);
    float result = calculate(number1, number2, operation);
    printf("The result is: %g\n", result);
    return 0;
}

float calculate(float number1, float number2, char *operation)
{
    float result;
    switch (*operation)
    {
    case '+':
        result = number1 + number2;
        break;
    
    case '-':
        result = number1 - number2;
        break;
    
    case '*':
        result = number1 + number2;
        break;
    
    case '/':
        result = number1 / number2;
        break;

    default:
        break;
    }
    return result;
}