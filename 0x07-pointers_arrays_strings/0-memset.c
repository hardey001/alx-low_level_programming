#include <stdio.h>
/**
 * _memset - memset
 * 
 * @s:
 * @b:
 * @n:
 */
void _memset(char *s, char b, unsigned int n)
{
int i;
char *st = (char*) s;
for(i = 0; i < n; i++)
st[i] = b;
}
