#include <stdio.h>
#include "main.h"

/**
*main - prints num  of the arg pass
*@argc: num of arg
*@argv: array of arg
*Return: 0
*/
int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%d\n", argc - 1);
return (0);
}
