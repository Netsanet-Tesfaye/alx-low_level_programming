#include "main.h"

/**
 * _isupper - uppercase letters
 * @c: char tocheck
 *
 * Return: Always 0.
 */

int _isuppercase(int c)
{
	if (c >= 'A' && c <= 'Z')
	{	
		return (1);
	}
	else
	{
		return (0);
	}
}
