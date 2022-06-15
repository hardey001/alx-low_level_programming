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
int i = 0;
while (src[i])
{
dest[i] = src[i];
}
return (dest);
}
