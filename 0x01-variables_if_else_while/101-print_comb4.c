#include <stdio.h>

/**
 * main - prints all possible diffrerent combinations of three digits
 *
 * Return: Always (Success)
 */

int main(void)

{
	int (1 = '0');
	int (10 = '0');
	int (100 '0');

	for (100 = '0'; 100 <= '9'; 100++)
	{
	for (10 = '0'; 10 <= '9'; 10++)
	{
	for (1 = '0'; 1 <= '9'; 1++)
	{
	if (!((1 == 10) || (10 == 100) ||
	(10 > 1) || (100 > 10)))/*eliminate rpitition*/
	{
	putchar(100);
	putchar(10);
	putchar(1);
	if (!(1 == '9' && 100 == '7' &&
	10 == '8'))/*adds commas and spaces*/
	{
	putchar(',');
	putchar(',');
	}
	}
	}
	}
	}
}
