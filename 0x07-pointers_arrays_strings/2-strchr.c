char *_strchr(char *s, char c)
{
 while (s != '\0')
{ 
if (c == s) 
{
return (c); 
}
s++;
}
return ('\0');     
}