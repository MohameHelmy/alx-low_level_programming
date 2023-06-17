#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand();

    n %= 10;
    printf("Last digit of %d is %d ", n, n);

    if (n > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (n == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return 0;
}
