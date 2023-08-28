#include <stdio.h>
/**
 * main- Entry Point
 *
 * Description: A program to print a histogram of the
 * frequencies of different characters in its input
 *
 * Return: Alway Nothing
 */

#define WORD_LENGTH 1024
int not_found(char c, char *array, int lenght);

int main(void)
{
	int c, j, n, m;
	int index = 0;
	char character[WORD_LENGTH];
	char counted[WORD_LENGTH];

	c = getchar();
	while (c != EOF)
	{
		character[index] = c;
		index++;
		c = getchar();
	}

	printf("\n");
	counted[0] = '\0';

	for (j = 0, m = 0; j < index; j++)
	{
		if (not_found(character[j], counted, m))
		{
			counted[m] = character[j];
			printf("%6c| ", character[j]);

			for (n = 0; n < index; n++)
			{
				if (character[j] == character[n])
				{
					printf("# ");
				}
			}
			printf("\n");
			m++;
		}
	}
	return (0);
}
/**
 * not_found - check if character is store in array
 * @c: character to check
 * @array: array to check
 * @lenght: lenght of array
 * Return: 0 on success, 1 on failure
 */

int not_found(char c, char *array, int lenght)
{
	int i;

	for (i = 0; i < lenght; i++)
	{
		if (c == array[i] || c == ' ' || c == '\t' || c == '\n')
			return (0);
	}
	return (1);
}
