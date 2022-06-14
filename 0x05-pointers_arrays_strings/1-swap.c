#include <stdio.h>
#include "main.h"
/**
*swap_int - retuns
*@a:lone
*@b: integer
*/

void swap_int(int *a, int *b)
{
int h;
h = *a;
*a = *b;
*b = h;
}
