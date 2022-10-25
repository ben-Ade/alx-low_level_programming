#include "main.h"
/**
*_strlen -String length
*
*@s: string
*
* Return: void
*/
int _strlen(char *s)
{
int len = 0;
while (s[len])
len++;
return (len);
}
