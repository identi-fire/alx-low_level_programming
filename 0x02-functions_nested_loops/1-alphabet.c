#include "main.h"

/**
  * print_alphabet - print alphabets,followed by a new line
  * Return: Always 0.
  */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
