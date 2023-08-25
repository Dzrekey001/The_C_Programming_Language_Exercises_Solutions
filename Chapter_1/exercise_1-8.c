#include <stdio.h>
/**
 * main- Entry point
 *
 * Description: A program to count blanks, tabs, and newlines
 *
 * Return: Always Nothing
 */

int main(void)
{
	int blanks, tabs, nl;
	int c;

	blanks = 0;
	tabs = 0;
	nl = 0;

	printf("Enter text (Ctr+D to end):\n");
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			blanks++;
		}
		else if (c == '\t')
		{
			tabs++;
		}
		else if (c == '\n')
		{
			nl++;
		}
	}
	printf("\n");
	printf("there are %d blankslines\n", blanks);
	printf("there are %d tabs\n", tabs);
	printf("there are %d newlines\n", nl);
	return (0);
}
