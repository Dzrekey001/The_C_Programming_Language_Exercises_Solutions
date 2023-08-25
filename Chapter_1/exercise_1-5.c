#include <stdio.h>
/**
 * main- Entry point in the program
 *
 * Description: Modify the temperature conversion
 * program to print the tabel in  reverse order,
 * that is, from 300 to 0.
 *
 * Return: Alway Nothing;
 */
#define LOWER 0
#define UPPER 300
#define STEP 20

int main(void)
{
	float fahr, celsius;

	fahr = UPPER;
	printf("Temperature conversion from Fahrenheit to Celsuis\n");
	while (fahr >= LOWER)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%6.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr - STEP;
	}
	return (0);
}
