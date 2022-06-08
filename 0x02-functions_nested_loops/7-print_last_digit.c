#include <stdio.h>
#include <stdlib.h>
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
k = abs(y) % 10;
_putchar(abs(k) + '0');
return (abs(k));
}
