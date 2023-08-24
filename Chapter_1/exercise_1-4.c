#include <stdio.h>
/**
 * main- Entry point into the program
 *
 * Description: A program to print the correspondig
 * Celsius to Fahrenheit table.
 *
 * Return: Always Nothing
 */

int main(void)
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;

	while (celsius <= upper)
	{
		fahr = (celsius * 1.8) + 32.0;

		printf("%5.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return (0);
}
