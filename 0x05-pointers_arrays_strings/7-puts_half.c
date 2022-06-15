#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*puts_half - retuns
*@s:char
*/

void puts_half(char *s)

{
int len = 0, half;
while (s[len] != '\0')
{
len++;
}
half = (len)/2;
if (len % 2 != 0)
{
_putchar(s[(len -1 )/2]);
}
while ((half <= len))
{
_putchar(s[half]);
half++;
}
_putchar ('\n');
}
