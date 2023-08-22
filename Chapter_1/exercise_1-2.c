#include "stdio.h"
/**
 * main- Entry point to the program
 * Description: Experiment to find out what happens when printf's
 * argument string contains '\c, where c is some character
 * not listed above.
 *
 * Return: Alway Nothing
 */

int main(void)
{
	/**
	 * Utilized various characters (e.g., '\$', '\@', '\#')
	 * as 'c' to create unrecognized escape sequences.
	 */
	printf("Testing the \\c escape sequence:\\` \\@ \\$ \\& \\# \n");
	return (0);
}
