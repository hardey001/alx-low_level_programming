#include <stdio.h>
#include "main.h"
/**
* times_table - print alphabeth
*/
void times_table(void)

{
int a;
int b;
int c;
for(a = 0; a <= 9; a++)
{
for(b = 0; b <= 9; b++)
{
c= a * b;
printf("%d", c);
if (c < 9)
{
printf(",  ");
}
else
{
printf(", ");
}
if (a == 9 && b == 9)
{
continue;
}
if (b == 9)
{
printf("\n");
}
}
}
}
