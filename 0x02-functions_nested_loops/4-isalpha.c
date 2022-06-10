#include "main.h"

/**
 * _isalpha - displays 1 if the input is alphabets
 * otherwise it displays 0
 *
 * @c: The characryer in ASCII code
 *
 * Return: 1 for alphabets. otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
