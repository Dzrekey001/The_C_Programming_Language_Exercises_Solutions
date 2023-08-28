#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: A program to print a histogram of the
 * lenght of words in ints input.
 *
 * Return: Always Nothing
 */

#define MAX_CHARACTER 1024

int main(void)
{
	int i, j, c, n;
	int character_array[MAX_CHARACTER];
	int highest_word, current_lenght;
	int c_len;

	highest_word = 0;
	current_lenght = 0;
	j = 0;

	/**
	 * gets the highest word count from input
	 * and put all characters in the variable
	 * character_array
	 */
	while ((c = getchar()) != EOF)
	{
		character_array[j] = c;
		if (c == ' ' || c == '\t' || c == '\n')
		{
			if (current_lenght > highest_word)
				highest_word = current_lenght;
			current_lenght = 0;
		}
		else
			current_lenght++;
		j++;
	}

	/**
	 * print out the histogram of the lenght of words from
	 * from character array
	 */

	for (i = 1; i <= highest_word; i++)
	{
		c_len = 0;
		n = 0;

		printf("%6d| ", i);
		while (character_array[n] != '\0')
		{
			if (character_array[n] == ' ' || character_array[n] == '\t'
					|| character_array[n] == '\n')
			{
				if (c_len == i)
				{
					printf("# ");
				}
				c_len = 0;
			}
			else
				c_len++;
			n++;
		}
		printf("\n");

	}
	return (0);
}
