#include <stdio.h>
/**
 *main - Entry point
 *Return: Always 0 (Success)
 */
int main(void)
{
int i = 48;
int j;
int k;
int space = 32;
int comma = 44;
while (i <= 55)
{
j = i + 1;
while (j <= 56)
{
k = j + 1;
while (k <= 57)
{
putchar(i);
putchar(j);
putchar(k);
if (!(i == 55 && j == 56 && k == 57))
{
putchar(comma);
putchar(space);
}
k++;
}
j++;
}
i++;
}
putchar('\n');
return (0);
}
