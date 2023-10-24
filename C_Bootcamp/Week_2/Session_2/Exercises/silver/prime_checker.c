#include <stdio.h>

int isPrime(int number);

int main()
{
    int number = 9;
    printf("The number %d primeness is: %d (1 = prime)\n", number, isPrime(number));
    return 0;
}

int isPrime(int number)
{
    for (int divisor = 2; divisor < number; divisor++)
    {
        if(number % divisor == 0)
        {
            return 0;
        }
    }
    return 1;
}