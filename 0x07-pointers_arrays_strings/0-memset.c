#include "main.h"
/**
* _memset - memset
* @s:knjkn
* @b:kojkj
* @n:ioijoi
* Return: char
*/
char *_memset(char *s, char b, unsigned int n)

{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
