#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char tocheck
 *
 * Return: 0 or 1
 */

int _isuppercase(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
