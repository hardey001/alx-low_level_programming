#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcpy- retuns
*@dest:char
*@src: jud
*Return: char
*/

char *_strcpy(char *dest, char *src)

{
char *str = dest;
while (*src)
{
*dest++ = *src++;
}
strcat(str, '\0');
return (str);
}
