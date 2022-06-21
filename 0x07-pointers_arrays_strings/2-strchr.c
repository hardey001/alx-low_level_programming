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
while (*s != '\0')
{ 
if(*s != c)
s++;
else
return s;	
}
}
