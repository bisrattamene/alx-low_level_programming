#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int d = 0;
while (d < 10)
{
putchar(d + '0');
if (d < 9)
{
putchar(',');
putchar(' ');
}
d++;
}
putchar('\n');
return (0);
}
