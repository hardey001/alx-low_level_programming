#include <stdio.h>
#include "main.h"
/**
*leet- retuns
*@str:lol
*Return: char
*/

char *leet(char *str)

{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == 'a' || str[i] == 'A')
{
str[i] = "4";
continue;
}
if (str[i] == 'e' || str[i] == 'E')
{
str[i] = "3";
continue;
}
if (str[i] == 'o' || str[i] == 'O')
{
str[i] = "0";
continue;
}
if (str[i] == 't' || str[i] == 'T')
{
str[i] = "t";
continue;
}
if (str[i] == 'l' || str[i] == 'L')
{
str[i] = "1";
continue;
}
}
return (str);
}

