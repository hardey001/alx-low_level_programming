#include <stdio.h>
#include "main.h"
/**
* times_table - print alphabeth
*/
void times_table(void)

{
int a;
int b;
for(a = 0; a <= 9; a++)
{
for(b = 0; b <= 9; b++)
{
printf("%d,  ", (a*b));
if (a == 9 && b == 9)
{
continue;
}
if (b == 9)
printf("\n");
}
}
}
