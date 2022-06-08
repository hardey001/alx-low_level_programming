#include <stdio.h>
#include "main.h"
/**
* print_sign - Short description, single line
* @n: c
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int print_sign(int n)

{

if (n > 0)
{
return (1);
printf("+");
}
else if (n == 0)
{
return (0);
printf('0');
}
else
{
return (-1);
printf("-");
}
}
