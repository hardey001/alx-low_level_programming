#include "main.h"
/**
 * _memcpy - jjfjjf
 *
 * @dest: jjgj
 * @src: jdjdfjf
 * @n: lflg
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)

{
unsigned int i;
char *csrc = src;
char *cdest = dest;
for (i = 0; i < n; i++)
{
cdest[i] = csrc[i];
}
return (dest);
}
