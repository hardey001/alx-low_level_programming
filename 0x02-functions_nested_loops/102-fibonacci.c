#include <stdio.h>
/**
* main - Short description, single line
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
int main(void)
{
int num1 = 1,num2 = 2,num3,sum = 0, i;
printf("%d, %d, ", num1, num2);
for (i = 3; i < 50; i++)
{
num3 = num1 + num2;
printf("%d,  ", num3);
num1 = num2,
num2 = num3;
}
}
