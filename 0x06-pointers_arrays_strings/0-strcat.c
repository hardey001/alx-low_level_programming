#include <stdio.h>
#include "main.h"
/**
*_strcat- retuns
*@dest:char
*@src: jud
*Return: char
*/
char *_strcat(char *dest, char *src)
{
int le1 = 0, le2 = 0, i = 0;
while (dest[le1] != '\0')
{
le1++;
}
while (src[le2] != '\0')
{
le2++;
}
for (i = le1;i <= le2; i++)
{
dest[le1 + i] = src[i];
}
dest[le1 + i] = '\0'
return (dest);
}
