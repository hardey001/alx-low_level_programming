#include <stdio.h>
#include "main.h"

char *_strcat(char *dest, char *src)
{
int le1, le2, i;
le1 = strlen(*dest);
le2 = strlen(*src);
for (i = 0;i <= le2; i++)
{
dest[le1 + i] = src[i];
}
return (dest);
}