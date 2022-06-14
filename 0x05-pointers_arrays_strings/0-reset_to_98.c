#include <stdio.h>
#include "main.h"
/**
*reset_to_98 - retuns
*@*n:lone
*/

void reset_to_98(int *n)
{
int *pointer;
pointer = &n;
n = *pointer;
}
