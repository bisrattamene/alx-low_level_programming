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
int u = 49;
int d = 48;
int position_u = 49;
while (d <= 56)
{
while (u <= 57)
{
putchar(d);
putchar(u);
if (d != 56)
{
putchar(',');
putchar(' ');
if (u != 57)
{
putchar(',');
putchar(' ');
}
u++;
}
d++;
position_u++;
u = position_u;
}
putchar('\n');
return (0);
}
