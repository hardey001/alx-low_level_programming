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
char str[5000];
int val;
strcpy(str, s);
val = atoi(str);
return (val);
}
