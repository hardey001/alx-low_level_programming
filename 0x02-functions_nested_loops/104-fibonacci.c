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
long double num1 = 1, num2 = 2, num3, i;
printf("%Lf, %Lf, ", num1, num2);
for (i = 3; i <= 98; i++)
{
num3 = num1 + num2;
if (i == 98)
printf("%Lf\n", num3);
else
printf("%Lf, ", num3);
num1 = num2;
num2 = num3;
}
return (0);
}
