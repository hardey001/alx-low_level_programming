#include <stdio.h>
#include "main.h"
/**
* print_alphabet_x10 - print alphabeth
*/
void print_alphabet_x10(void)

{
int i;
char alpha;
for (i = 0; i < 10; 1++)
{
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
}
