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
for (int i = 0; i < n; i++)
{
printf("%d, ", a[i]);
}
printf("\n");
}
