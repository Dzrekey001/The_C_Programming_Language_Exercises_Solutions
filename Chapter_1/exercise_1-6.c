#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: A program that verify that
 * the expression getchar() != EOF is 0 or 1.
 *
 * Return: Always Nothing
 */

int main(void)
{
	int c, result;

	printf("Enter charters (Ctr+D to end):\n");
	while ((c = getchar()) != EOF)
	{
		result  = (c != EOF);
		printf("Character '%c', Expression Result %d\n", c, result);
	}
	printf("EOF is: %d\n", (c != EOF));
	return (0);
}
