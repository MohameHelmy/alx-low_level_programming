#include "main.h"

/**
*move_past_star - moves past the star
*@s2: second str, can contain wild card.
*Return: point past the star
*/

char *move_past_star(char *s2)
{
if (*s2 == '*')
return (move_past_star(s2 + 1));
else
return (s2);
}
/**
*inception - makes the magic the reality
*@s1: first str
*@s2: second str, can contain a wild card
*Return: 1 if it was identical, 0 otherwise
*/

int inception(char *s1, char *s2)
{
int r = 0;
if (*s1 == 0)
return (0);
if (*s1 == *s2)
r += wildcmp(s1 + 1, s2 + 1);
r += inception(s1 + 1, s2);
return (r);
}

/**
*wildcmp -correlates two str lexico
*@s1: first str
*@s2: second str, can contain wildcard
*Return: 1 if true, 0 otherwise
*/
int wildcmp(char *s1, char *s2)
{
int r = 0;
if (!*s1 && *s2 == '*' && !*move_past_star(s2))
return (1);
if (*s1 == *s2)
r += wildcmp(s1 + 1, s2 + 1);
r += inception(s1, s2);
return (!!r);
return (0);
}
