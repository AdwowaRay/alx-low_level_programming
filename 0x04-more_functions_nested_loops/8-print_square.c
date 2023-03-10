#include "main.h"
/**
 *print_square - prints a square, followed by a new line.
 *@size: size of the square
 */
void print_square(int size)
{
	int i = 0, j;

	while (i < size && (!(size < 0 || size == 0)))
	{
		for (j = 0; j < size; j++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	if (size <= 0)
		_putchar('\n');
}
