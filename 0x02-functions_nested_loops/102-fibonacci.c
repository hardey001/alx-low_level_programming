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
long num1 = 1, num2 = 2, num3, i;
printf("%ld, %ld, ", num1, num2);
for (i = 3; i <= 50; i++)
{
num3 = num1 + num2;
if (i == 50)
printf("%ld\n", num3);
else
printf("%ld, ", num3);
num1 = num2;
num2 = num3;
}
return (0);
}
