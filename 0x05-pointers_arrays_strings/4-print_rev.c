#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*print_rev - retuns
*@s:char
*/

void print_rev(char *s)

{
int n = strlen(s), i;
char *begin_ptr, *end_ptr, ch;
begin_ptr = s;
end_ptr = s;
for(i = 0; i < (n - 1); i++ )
{
end_ptr++;
}
for(i = 0; i < (n/2); i++)
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;
begin_ptr++;
end_ptr--;
}
}
