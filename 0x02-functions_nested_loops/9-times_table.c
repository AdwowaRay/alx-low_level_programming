#include "main.h"

/**
 *times_table - prints the 9 times table from 0
 */

void times_table(void)
{
	int i = 0, j, k;

	while (i <= 9)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		j = 1;
		while (j <= 9)
		{
			k = (i * j);
			if ((k / 10) > 0)
			{
				_putchar((k / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((k % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
