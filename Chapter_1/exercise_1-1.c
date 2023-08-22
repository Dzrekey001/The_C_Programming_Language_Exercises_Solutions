#include "stdio.h"
/**
 * main - Entry point to the program
 * Description: Run the "hello, world" program on your system.
 * Experiment with leaving out parts of the program,
 * to see what error messages you get.
 * Return: Always Nothing
 */

int main(void)
{
	printf("Hello World\n");
	/**
	 * when ';' is ommitted, 'error: expected ‘;’
	 * before ‘}’ token' occures
	 */

	return (0);

	/**
	 * when } is removed, 'error: expected declaration
	 * or statement at end of input' occures
	 */
}
