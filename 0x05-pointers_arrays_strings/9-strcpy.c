#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*_strcpy- retuns
*@dest:char
*@src: jud
*Return: char
*/

char _strcpy(char *dest, char *src)

{
int len = 0;
char *str = dest;
while (str[len] != '\0')
{
len++;
}
while (*src)
{
*dest++ = *src++;
}
str[len + 1] = '\0';
return (str);
}
