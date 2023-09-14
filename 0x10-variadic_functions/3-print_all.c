#include "variadic_functions.h"
/**
 * format_char - formats char
 * @separator: str separator
 * @ap: arg  pointer
 */
void format_char(char *separator, va_list ap)
{
	printf("%s%c", separator, va_list (ap, int));
}
/**
 * *format_int - format int
 * @separator: the string separator
 * @ap: arg pointer
 */
void format_int(char *separator, va_list ap)
{
	printf("%s%d", separator, va_arg(ap, int));
}
/**
 * format_float - formats float
 * @separator: the string separator
 * @ap: arg pointer
 */
void format_float(char *separator, va_list ap)
{
	printf("%s%f", separator, va_arg(ap, int));
}
/**
 * format_string - formats str
 * @separator: the string separator
 * @ap: arg pointer
 */
void format_string(char *separator, va_list ap)
{
	char *str = va_arg(ap, char *);
x
	switch ((int)(!str))
	case 1:
		str = "(nill)";
		printf("%s%s", separator, str);
}
/**
 * print_all - prints anything
 * @format: formats a string
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list ap;

	token_t tokens{} = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};
	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(separator, ap);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}