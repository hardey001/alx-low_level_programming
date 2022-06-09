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
int num1 = 1, num2 = 2, num3 = 0, sumall = 0, i;
for (i = 3; num3 <= 4000000; i++)
{
num3 = num1 + num2;
if (num3 % 2 == 0)
sumall = sumall + num3;
num1 = num2, num2 = num3;
}
printf("%d\n", (sumall + 2));
return (0);
}
