#include "main.h"

/**
<<<<<<< HEAD
 * print_number - Prints an integer.
 * @n: The integer to be printed.
=======
 * print_number - prints an integer.
 * @n: integer to be printed
 *
>>>>>>> 4c2c026715a589bb86fc37ae07c5ab1fcbed94ab
 */
void print_number(int n)
{
	unsigned int num = n;

<<<<<<< HEAD
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
=======
        if (n < 0)
        {
                _putchar('-');
                num = -num;
        }

        if ((num / 10) > 0)
                 print_number(num / 10);

        _putchar((num % 10) + '0');
>>>>>>> 4c2c026715a589bb86fc37ae07c5ab1fcbed94ab
}
