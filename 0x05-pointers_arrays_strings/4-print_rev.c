#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_rev - retuns
*@s:char
*/

void print_rev(char *s)

{
int len = 0;
while (s[len] != '\0')
{
len++;
}
while ((len + 1) >= 0)
{
_putchar(s[len]);
len--;
}
_putchar ('\n');
}
