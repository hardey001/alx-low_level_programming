#include "main.h"
/**
 * _strchr - kklk
 * 
 * @s: loki
 * @c:kkdi
 * Return: char* 
 */
char *_strchr(char *s, char c)
{
int i;
 while (s[i] != '\0')
{ 
if (c == s[i]) 
{
return (c); 
}
s++;
}
return ('\0');     
}
