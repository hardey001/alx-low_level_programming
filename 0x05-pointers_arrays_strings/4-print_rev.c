#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_rev - retuns
*@s:char
*/

void print_rev(char *s)

{
int n = strlen(s), i, temp;

char a[] = *s;
for (i = 0; i < n/2; i++)
{
temp = a[i];
a[i] = a[n-i-1];
a[n-i-1] = temp;
}
for (i=0; i<n; i++)
{
_putchar(a[i]);
}
}
