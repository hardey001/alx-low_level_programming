#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print alphabeth
*/
void jack_bauer(void)
{
int a;
int b;
for (a = 0; a <= 23; a++)
{
for (b = a; b <= 59; b++)
{
_putchar((a / 10) + '0');
_putchar((a % 10) + '0');
_putchar(':');
_putchar((b / 10) + '0');
_putchar((b % 10) + '0');
if (a == 23 && b == 59)
{
continue;
}
_putchar('\n');
}
}
}
