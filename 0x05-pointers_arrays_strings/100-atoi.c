#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_atoi - retuns
*@s:char
*Return: int
*/

int _atoi(char *s)

{

int res = 0, i;
for (i = 0; s[i] != '\0'; ++i)
res = res * 10 + s[i] - '0';
return res;
}
