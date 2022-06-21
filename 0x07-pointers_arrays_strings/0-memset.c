#include <stdio.h>
#include "main.h"
/**
* _memset - memset
*
* @s:
* @b:
* @n:
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)

{
int i;
char *st = s;
for (i = 0; i < n; i++)
{
st[i] = b;
}
return (*st);
}
