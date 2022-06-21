#include "main.h"
#include <stdio.h>
/**
 * _strchr - kklk
 *
 * @s: loki
 * @c:kkdi
 * Return: char*
 */

char *_strchr(char *s, char c)

{
do {
if (*s == c) return s;
}
while (*s++);
return (NULL);
}
