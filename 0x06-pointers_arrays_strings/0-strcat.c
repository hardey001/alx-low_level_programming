#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcat- retuns
*@dest:char
*@src: jud
*Return: char
*/
char *_strcat(char *dest, char *src)
{
int le1, le2, i;
le1 = strlen(*dest);
le2 = strlen(*src);
for (i = le1;i <= le2; i++)
{
dest[le1 + i] = src[i];
}
dest[le1 + i] = '\0'
return (dest);
}
