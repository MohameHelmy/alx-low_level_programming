#include <stdio.h>

/**
*swap_int - Swaps the values of two ontegers.
*@a: The first integer to ba swapped.
*@a: The second integer to ba swapped.
*
*Return :nothing
*/

void swap_int(int *a, int *b)
/* the function that swaps the values of two integers.*/
{
int temp = *a;
*a = *b;
*b = temp;
}
