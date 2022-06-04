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
int c;
int d;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 10; b++)
{
putchar((a % 10) + '0');
putchar((b % 10) + '0');
putchar(' ');
for (c = 0; c < 10; c++)
{
for (d = 0; d < 10; d++)
{
putchar((c % 10) + '0');
putchar((d % 10) + '0');
}
}
if (a == 9 && b == 8 && c == 9 && d == 9)
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
