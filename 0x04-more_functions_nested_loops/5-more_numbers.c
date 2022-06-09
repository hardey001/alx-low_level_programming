#include <stdio.h>
#include "main.h"
/**
* more_numbers - print alphabeth
*/
void more_numbers(void)

{
int a, b;
for (a = 0; a < 10; a++)
{
for (b = 0; b <= 14; b++)
{
putchar((b % 10) + '0');
}
putchar('\n');
}
}
