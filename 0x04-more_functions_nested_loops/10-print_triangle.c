#include <stdio.h>
#include "main.h"
/**
* print_line - returnnmm
* @size: add am 
* Return: 0
*/
void print_triangle(int size)
{
int i, j = size;
for(i = size; i >= 1; --i)
{
putchar(' ');
for(j = 1; j <= size; j++)
{
putchar('#');
}
putchar('\n');
}
}
