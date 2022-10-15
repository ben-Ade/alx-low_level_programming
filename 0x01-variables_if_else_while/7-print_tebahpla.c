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
char lowCR;
for (lowCR = 'z'; lowCR >= 'a'; lowCR--)
putchar(lowCR);
putchar('\n');
return (0);
}
