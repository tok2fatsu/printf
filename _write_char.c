#include "main.h"

/**
 * _write_char - writes the character
 * @c: The character
 * Return: On success 1.
 * On error, -1.
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
