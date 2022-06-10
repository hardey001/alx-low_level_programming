#include <stdio.h>
#include "main.h"
/**
* print_diagonal - returnnmm
* @n: add am 
* Return: 0
*/
void print_diagonal(int n)
{
int a;
if (n <= 0 )
putchar('\n');
else
{
for (a = 0; a < n; a++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
