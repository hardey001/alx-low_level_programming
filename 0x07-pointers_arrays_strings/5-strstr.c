#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - ppoooi
 *
 * @haystack: k
 *@needle: djdj
 * Return: char*
 */

char *_strstr(char *haystack, char *needle)
{
int i;
for (i = 0; needle[i] && haystack[i]; i++)
for (; needle[i] != haystack[i]; haystack++)
i = 0;
return (needle[i] ? 0 : (char *)haystack);
}
