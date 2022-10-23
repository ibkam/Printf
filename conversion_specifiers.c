#include "main.h"

/**
 * pr_chr - Prints character
 *@list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int pr_chr(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * pr_str - Prints a string
 *
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */

int pr_str(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * pr_per - Prints a percent symbol
 * @list: list of arguments
 *
 * Return: Will return the amount of characters printed.
 */
int pr_per(__attribute__((unused))va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * pr_int - Prints an integer
 * @list: list of arguments
 * Return: Will return the amount of characters printed.
 */
int pr_int(va_list list)
{
	int num_length;

	num_length = print_number(list);
	return (num_length);
}

/**
 * unsigned_integer - Prints Unsigned integers
 * @list: List of all of the argumets
 * Return: a count of the numbers
 */
int unsigned_integer(va_list list)
{
	unsigned int num;

	num = va_arg(list, unsigned int);

	if (num == 0)
		return (print_unsgined_number(num));

	if (num < 1)
		return (-1);
	return (print_unsgined_number(num));
}
