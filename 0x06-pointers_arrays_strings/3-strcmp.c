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
<<<<<<< HEAD
comp = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 1 : -1;
return (comp);
=======
if (s1[i] == s2[i])
return 0;
if ((s1[i] | 32) < (s2[i] | 32))
return -1;
return 1;
>>>>>>> parent of 8a3995b (Update 3-strcmp.c)
}
