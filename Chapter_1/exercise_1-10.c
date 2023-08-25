#include <stdio.h>
/**
 * main-Entry point
 *
 * Description: A program to copy its input to its output
 * replacing tab by \t, each backspace by \b, and each backslach by \\.
 * this makes tabs and backspaces visible in an unambiguous way
 *
 * Return: Always Nothing
 */

int main(void)
{
	int c, tmp;

	while ((c = getchar()) != EOF)
	{
		tmp = c;

		if (c == '\t')
		{
			putchar('\\');
			putchar('t');
		}
		else if (c == '\b')
		{
			putchar('\\');
			putchar('b');
		}
		else if (c == '\\')
		{
			putchar('\\');
			putchar('\\');
		}
		else
			putchar(c);
	}
	return (0);
}
