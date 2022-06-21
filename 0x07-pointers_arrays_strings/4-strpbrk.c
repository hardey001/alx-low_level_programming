#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strpbrk -jjeejje
 * 
 * @s:km
 * @accept:kkjj
 * Return: char* 
 */
 

char *_strpbrk(char *s, char *accept)

{
 char *word;
for (int i = 0; s[i] != '\0'; i++)
{
for (int j = 0; accept[j] != '\0'; j++)
{
if (s[i + j] == accept[j])
{
return (s[i + j]);
}
}
}
}
