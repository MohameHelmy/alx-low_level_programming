#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - Calc the length of a st
*@s: str to count
*
*Return: integer value
*/

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}
