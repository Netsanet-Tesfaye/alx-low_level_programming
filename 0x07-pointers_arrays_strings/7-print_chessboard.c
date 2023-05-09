#include "main.h"

/**
 * print_chessbord - prints the chessbord
 * @a: pointer to pieces to print
 *
 * Return: void
 */
void print_chessbord(char (*a)[s])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
	_putchar(a[i][j]);
		}
	_putchar('\n');
	}
}
