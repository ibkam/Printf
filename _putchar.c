#include "main.h"

/**
 * _putchar - writes the character c to stdout
<<<<<<< HEAD
 * @c: The character to print
=======
 *
 * @c: The char to print
 *
>>>>>>> e1accd00a57db1aac1194227644fcd48624131d4
 * Return: On success 1.
 *
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
