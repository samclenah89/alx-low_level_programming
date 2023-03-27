/*
 * File: 3-print_numbers.c
 * Auth: Sam Clemantine
 */

#include "main.h"

/**
<<<<<<< HEAD
* print_numbers - function that prints the numbers, from 0 to 9.
*/
void print_numbers(void)
{
int num;
for (num = 0; num <= 9; num++)

	for (c = '0'; c <= '9'; c++)
	_putchar((num % 10) + '0');
=======
 * print_numbers - Prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');
>>>>>>> ab00bcb10e920d80dfab6f7727c63457a4e1bc47

	_putchar('\n');
}
