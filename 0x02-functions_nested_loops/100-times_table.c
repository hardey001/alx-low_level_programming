#include <stdio.h>
#include "main.h"
/**
* tprint_times_table - print alphabeth
*@n: jkjk
*Return:juju
*/
void print_times_table(int n)

{
int a;
int b;
int c;
if (n >= 0 && n <= 15){
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
c = a * b;
if (b == n && c > 99)
{
printf(" %d\n", c);
continue;
}
if (b == n && c > 10)
{
printf("  %d\n", c);
continue;
}
if (b == n && c < 10)
{
printf("   %d\n", c);
continue;
}
else if (b == 9 && c <= 9)
{
printf("   %d\n", c);
continue;
}
else if (b == 0)
printf("%d,", c);
else if (c >= 0 && c <= 9)
printf("   %d,", c);
else if (c > 9 && c <= 99)
printf("  %d,", c);
else if (c >= 100)
printf(" %d,", c);
else if (b == 0 && a == 0)
printf("%d,   ", c);
else if (b == 0 && a != 0)
printf("%d,", c);
else
printf("%d,", c);
}
}
}
}
