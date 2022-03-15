#include <stdio.h>
#include "main.h"

/**
<<<<<<< HEAD
* main - prints _putchar
*
* Return: 0 (Success)
*/

int main(void)
=======
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 */
void print_alphabet(void)
>>>>>>> 94fbb27ed83a4cd1115440a3a27693add321c0d0
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
