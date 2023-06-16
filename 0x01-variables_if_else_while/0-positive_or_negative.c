#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number %d ", n);
    
    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
