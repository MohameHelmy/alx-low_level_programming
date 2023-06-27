#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;

while (s[c])
{
if (s[c] == '-')
min *= -1;
else if (s[c] >= '0' && s[c] <= '9')
{
isi = 1;
ni = (ni * 10) + (s[c] - '0');
}
else if (isi == 1)
	{
break;
}
c++;
}

ni *= min;
return (ni);
}
