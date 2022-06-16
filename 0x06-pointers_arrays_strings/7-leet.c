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
while (str[i] != '\0')
{
if (str[i] == 'a' || str[i] == 'A')
{
str[i] = (4 % 10) + '0';
i++;
}
else if (str[i] == 'e' || str[i] == 'E')
{
str[i] = (3 % 10) + '0';
i++;
}
else if (str[i] == 'o' || str[i] == 'O')
{
str[i] = (0 % 10) + '0';
i++;
}
else if (str[i] == 't' || str[i] == 'T')
{
str[i] = (7 % 10) + '0';
i++;
}
else if (str[i] == 'l' || str[i] == 'L')
{
str[i] = (1 % 10) + '0';
i++;
}
else
{
i++;
}
}
return (str);
}
