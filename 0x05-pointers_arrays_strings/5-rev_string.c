#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*rev_string - retuns
*@s:char
*/

void rev_string(char *s)

{
int len = 0, i = 0;
while (s[len] != '\0')
{
len++;
}
len = len - 1;
while ((len + 1) > 0)
{
s[len] = s[i];
i++;
len--;
}
}
