#include <stdio.h>
/**
 * main- Entry point
 * Description: A program that prints its input one
 * word per line.
 * IN: defines the state in a word
 * OUT: defines a state out of word
 * Return: Always Nothing
 */

#define IN 1
#define OUT 0

int main(void)
{
	int c, state;

	state = OUT;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (state == IN)
			{
				putchar('\n');
				state = OUT;
			}
		}
		else
		{
			putchar(c);
			state = IN;
		}
	}
}
