#include <stdio.h>
#include "main.h"
/**
* print_to_98 - Short description, single line
* @n: c
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void print_to_98(int n)

{
int a;
if (n > 98)
{
for (a = n; a > 98; a--)
{
printf("%d, ", a);
}
printf("98\n");
}
if (n < 98)
{
for (a = n; a < 98; a++)
{
printf("%d, ", a);
}
printf("98\n");
}
if (n == 98)
{
printf("%d\n", n);
}
}
