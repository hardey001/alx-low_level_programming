#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabeth
*/
void print_numbers(void)

{
int a;
for (a = 0; a < 10; a++)
{
putchar((a % 10) + '0');
}
putchar('\n');
}
