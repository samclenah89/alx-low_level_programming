#include "main.h"

/**
* print_numbers - function that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)

	for (c = '0'; c <= '9'; c++)
	_putchar((num % 10) + '0');

	_putchar('\n');
}
