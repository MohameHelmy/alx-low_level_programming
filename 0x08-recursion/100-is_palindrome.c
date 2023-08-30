#include "main.h"

/**
 * _strlen_recursion - returns the length of a str
 * @s: str
 * Return: the length of a str
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - compares each char of the str
 * @s: str
 * @n1: smallest itrator
 * @n2: biggest itrator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a str is a pal
 * @s: str
 * Return: 1 if s is a palindrome, 0 otherwis.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
