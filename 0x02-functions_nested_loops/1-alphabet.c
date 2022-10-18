#include "main.h"
#include <stdio.h>
/**
* main-check the code
* Return: return 0.
*/
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
int c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
