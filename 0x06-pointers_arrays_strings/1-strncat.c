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
char *dest = s1;
while(*dest != '\0')
{
dest++;
}
while (n--)
{
if (!(*dest++ = *s2++))
{
return s1;
}
}
*dest = '\0';
return s1;
}
