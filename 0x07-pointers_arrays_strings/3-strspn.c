#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strspn - jhhiueh
 * @s:hhh
 * @accept:uu
 * Return: int
 */

unsigned int _strspn(char *s, char *accept)

{
int i, j;
unsigned int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i + j] == accept[j])
{
count = count + 1;
break;
}
}
}
return (count);
}
