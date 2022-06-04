#include <stdio.h>
/**
* main-entry
(*
*Return: 0
(*
*my_function - kklk kkkhj
*/
int main(void)

{
int a;
int b;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
putchar((0 % 10) + '0');
putchar((0 % 10) + '0');
putchar(' ');
putchar((a % 10) + '0');
putchar((b % 10) + '0');
if (a == 9 && b == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
