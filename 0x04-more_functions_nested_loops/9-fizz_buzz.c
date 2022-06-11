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
int i;

for (i = 1; i < 100; i++)
{
if (i % 15 == 0)
{
putchar('f');
putchar('i');
putchar('z');
putchar('z');
putchar('b');
putchar('u');
putchar('z');
putchar('z');
putchar('\t');
}
else if ((i % 3) == 0)
{
putchar('f');
putchar('i');
putchar('z');
putchar('z');
putchar('\t');
}
else if ((i % 5) == 0)
{
putchar('b');
putchar('u');
putchar('z');
putchar('z');
putchar('\t');
}
else
{
putchar(i + '0');
putchar('\t');
}
}
return (0);
}
