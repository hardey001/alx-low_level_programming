#include <stdio.h>
#include "main.h"
/**
* more_numbers - print alphabeth
*/
void print_line(int n)

{
int a, b;
if (n <= 0 )
putchar('\n');
else
{
for (a = 0; a < n; a++)
{
putchar('_');
}
putchar('\n');
}
}
