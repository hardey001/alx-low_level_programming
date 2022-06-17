#include <stdio.h>
#include "main.h"
/**
*print_number - retuns
*@n:lol
*/

void print_number(int n)

{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n > 9)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
