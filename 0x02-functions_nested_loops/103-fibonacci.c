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
long num1 = 1, num2 = 2, num3, sum, i;
for (i = 3; num3 <= 4000000; i++)
{
num3 = num1 + num2;
printf("%ld, ", num3);
if (num3 % 2 == 0)
{sum = sum + num3;
printf("%ld ll,", num3);}
else
continue;
}
printf("%ld\n", (sum + 2));
return (0);
}
