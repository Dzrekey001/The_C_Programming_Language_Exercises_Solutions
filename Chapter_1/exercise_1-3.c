#include <stdio.h>
/**
 * main- Entry point into the program
 * Description: Modify the temperature conversion program
 * to print a heading above the table.
 *
 * Return: Always Nothing
 */

int main(void)
{
	float fahr, celsius;
	float UPPER, LOWER, STEP;

	LOWER = 0;
	UPPER = 300;
	STEP = 20;

	fahr = LOWER;
	printf("\tConversion From Fahrenheit to celsius\n");
	while (fahr <= UPPER)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("\t%6.0f\t%7.2f\n", fahr, celsius);
		fahr = fahr + STEP;
	}
	return (0);
}
