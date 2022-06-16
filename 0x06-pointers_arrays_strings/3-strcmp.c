#include <stdio.h>
#include "main.h"
/**
*_strcmp- retuns
*@s1:char
*@s2: jud
*Return: int
*/

int _strcmp(char *s1, char *s2)

{
int comp = 0;
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
{
s1++;
s2++;
}
comp = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;
return (comp);
}
