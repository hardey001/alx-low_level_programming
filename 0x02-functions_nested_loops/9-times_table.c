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
if (b == 9 )
{
if (c == 9)
{
continue;
}
printf(" %d\n", c);
continue;
}
else if (c => 0 && c < 9)
{
printf("  %d,", c);
}
else if(c > 9)
{
printf(" %d,", c);
}
else if(b == 0 && a == 0)
{
printf("%d,  ", c);
}
else
{
printf("%d,", c);
}
}
}
}
