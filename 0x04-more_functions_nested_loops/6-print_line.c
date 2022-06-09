#include <stdio.h>
#include "main.h"
/**
* print_line - returnnmm
* @n: add am 
* Return: 0
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
