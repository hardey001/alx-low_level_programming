#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_array- retuns
*@n:char
*@a:int
*/

void print_array(int *a, int n)

{
int i;
for (i = 0; i < n; i++)
{
if (i == (n))
{
printf("cool");
}
else
{
printf("%d, ", a[i]);
}
}
printf("\n");
}
