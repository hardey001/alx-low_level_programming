#include <stdio.h>
#include "main.h"
/**
* jack_bauer - print alphabeth
*/
void jack_bauer(void)

{
int a;
int b;

for (a = 0; a <= 23; a++)
{
for (b = 0; b <= 59; b++)
{
printf("%d%d:%d%d\n", (a / 10), (a % 10), (b / 10), (b % 10));
if (a == 23 && b == 59)
{
continue;
}
}
}
}
