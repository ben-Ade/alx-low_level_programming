#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char alphab;
for (alphab = 'a'; alphab <= 'z'; alphab++)
{
if (alphab != 'e' && alphab != 'q')
putchar(alphab);
}
printf("\n");
return (0);
}
