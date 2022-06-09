#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - print alphabeth
*/
void print_most_numbers(void)

{
int a;
for (a = 0; a < 10; a++)
{
if (a != 4)
{
if (a != 2)
{
putchar((a % 10) + '0');
}
}
}
putchar('\n');
}
