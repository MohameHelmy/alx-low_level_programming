#include "main.h"

/**
* rev_string - Reverse array.
* @n: Pointer to string.
* Return: void.
*/

void rev_string(char *n)
{
  int i = 0;
  int j = 0;
  char temp;

  while (*(n + i) != '\0')
  {
    i++;
  }
  i--;

  for (j = 0; j < i; j++, i--)
  {
    temp = *(n + j);
    *(n + j) = *(n + i);
    *(n + i) = temp;
  }
}

/**
* infinite_add - Adds two numbers together.
* @n1: Text representation of first number to add.
* @n2: Text representation of second number to add.
* @r: Pointer to buffer.
* @size_r: Buffer size.
* Return: Pointer to calling function.
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
  int i = 0;
  int j = 0;
  int va11 = 0;
  int va12 = 0;
  int temp_tot = 0;
  int overflow = 0;
  int digits = 0;

  while (*(n1 + i) != '\0')
    i++;
  i--;

  while (*(n2 + j) != '\0')
    j++;
  j--;

  while (i >= 0 || j >= 0 || overflow == 1)
  {
    if (i >= 0)
      va11 = *(n1 + i) - '0';
    else
      va11 = 0;

    if (j >= 0)
      va12 = *(n2 + j) - '0';
    else
      va12 = 0;

    temp_tot = va11 + va12 + overflow;
    if (temp_tot >= 10)
      overflow = 1;
    else
      overflow = 0;

    if (digits >= (size_r - 1))
      return (0);

    *(r + digits) = (temp_tot % 10) + '0';
    digits++;
    j--;
    i--;
  }

  if (digits == size_r)
    return (0);

  *(r + digits) = '\0';
  rev_string(r);
  return (r);
}
