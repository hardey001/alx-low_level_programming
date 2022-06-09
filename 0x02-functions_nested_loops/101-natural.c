#include <stdio.h>
#include "main.h"
/**
* naturals - Short description, single line
(* a blank line
* Description: Longer description of the function)?
(* section header: Section description)*
* Return: Description of the returned value
*/
void narurals(void)
{
int i,sum = 0;
for( i= 0;i < 1024;i++)
{
if((i % 5 == 0)||(i % 3 == 0))
{
sum=sum + i;
}
}
Printf("%d", sum);
}
