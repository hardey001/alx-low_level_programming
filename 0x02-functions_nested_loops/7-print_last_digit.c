#include <stdio.h>
#include "main.h"
/**
* print_last_digit - Short description, single line
* @y: c
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int print_last_digit(int y)
{
int k;
if(y < 0)
{
_putchar(10 - (y % 10));
return 10 - (y % 10);
}
else 
{
k = y % 10;
_putchar(k + '0');
return (k);
}
}
