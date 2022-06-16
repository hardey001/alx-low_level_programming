#include <stdio.h>
#include "main.h"
/**
*_strncat- retuns
*@dest:char
*@src: jud
*@n:int
*Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
if((dest == NULL) && (src == NULL))
return NULL;
char *dest6 = dest;
while(*dest != '\0')
{
dest6++;
}
while (n--)
{
if (!(*dest6++ = *src++))
{
return dest;
}
}
*dest6 = '\0';
return dest;
}
