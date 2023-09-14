#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_string - string to n=be printed
 * @separator: the str separ
 * @n: num of arg
 * @...: the str to print
 *Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (i--)
		printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nill)",
				i ? (separator : "") : "\n");
	va_end(ap);
}
