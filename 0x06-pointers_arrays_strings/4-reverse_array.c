#include <stdio.h>
#include "main.h"
/**
*reverse_array- retuns
*@a:char
*@b: jud
*/
void reverse_array(int *a, int n)
{
int temp;
for(int i = 0; i<n/2; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
for(int i = 0; i < n; i++)
{
if (i != 0)
{
printf(", ");
}
printf("%d", a[i]);
}
}