#include "main.h"
#include <stdio.h>

/**
*_print_rev_recursion - Prints a str in re
*@s: the str to re
*Return: Nothing.
*/

void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}

s++;
_print_rev_recursion(s);
s--;
putchar(*s);
}
