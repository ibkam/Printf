#include "main.h"

/**
 * decipher - parses the constant string in the format pointer
 *
 * @format: A string containing all the desired characters.
 *
 * @f_list: A list of all the posible functions.
 *
 * @arg_list: A list containing all the args passed to the program.
 *
 * Return: A total count of the characters printed.
 */

int decipher(const char *format, pr_elem f_list[], va_list arg_list)
{
	int i, j, return_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].elem != NULL; j++)
			{
				if (format[i + 1] == f_list[j].elem[0])
				{
					return_val = f_list[j].f(arg_list);
					if (return_val == -1)
						return (-1);
					printed_chars += return_val;
					break;
				}
			}
			if (f_list[j].elem == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars = printed_chars + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
