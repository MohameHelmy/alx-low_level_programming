#include <stdio.h>

/**
 * _atoi - Convert a string to an integer.
 * @s: The pointer to convert.
 *
 * Return: An integer.
 */
int _atoi(char *s);

int main(void)
{
int nb;
nb = _atoi("98");
printf("%d\n", nb);
return 0;
}

int _atoi(char *s)
{
unsigned int ni = 0;
int min = 1;

while (*s)
{
if (*s == '-')
min *= -1;
else if (*s >= '0' && *s <= '9')
{
ni = (ni * 10) + (*s - '0');
}
else if (ni != 0)
	{        
break;
}
s++;
}

ni *= min;
return ni;
}
