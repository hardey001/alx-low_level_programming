#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*puts2- retuns
*@dest:char
*@src: jud
*Return: char
*/

char *_strcpy(char *dest, char *src)

{
char *str = dest;
while (*src)
{
*dest++ = *src ++;
}
return (str);
}
