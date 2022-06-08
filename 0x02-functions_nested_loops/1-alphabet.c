#include <stdio.h>
#include "main.h"
/**
* print_alphabet - print alphabeth
*/
void print_alphabet(void)

{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
