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
for (a = 0; a < 10; a++)
{
putchar((a % 10) + '0');
if (a == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
