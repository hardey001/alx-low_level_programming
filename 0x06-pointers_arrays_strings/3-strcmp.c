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
<<<<<<< HEAD
int i;
for (i = 0; s1[i] && s2[i]; ++i)
=======
int comp = 0;
while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
>>>>>>> 0e0ce1c990d70016fa2ca58e8b609de3476fbd1a
{
if (s1[i] == s2[i] || (s1[i] ^ 32) == s2[i])
continue;
else
break;
}
if (s1[i] == s2[i])
return (0);
if ((s1[i] | 32) < (s2[i] | 32))
return (-1);
return (1);
}