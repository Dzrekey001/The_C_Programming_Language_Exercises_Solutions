#include <stdio.h>
/**
 * main-Entry point
 *
 * Description: A program to copy it input to its output,
 * replacing each string of one or more blanks by a single
 * blank.
 *
 * Return: Always Nothing
 */

int main(void)
{
	int c, tmp;

	printf("Enter lines (Ctrl+D to end):\n");

	c = getchar();

	while (c != EOF)
	{
		tmp = c;
		if (c == ' ')/*checks if the character is blank*/
		{
			/**
			 * checks if the next character is empty space
			 * and loop to the last visible character after
			 * the last empty space
			 */
			while ((c = getchar()) == ' ')
			{
				;
			}
		}
		else
		{
			c = getchar();
		}
		putchar(tmp);
	}
	return (0);
}
