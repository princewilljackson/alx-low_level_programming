#include "main.h"

/**
 * print_alphabet_x10 - this function prints alphabets 10
 *
 * Description: prints 10 times
 * Return: Always(0).
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		count++;
		_putchar('\n');
	}
}
