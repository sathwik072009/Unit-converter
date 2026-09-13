#include <stdio.h>
int main() {
	double fahrenheit, celsius;
	printf("Enter a temperature in fahrenheit: ");
	scanf("%lf", &fahrenheit);
        celsius=(fahrenheit-32.0)*5.0/9.0;
	printf("\n---conversion result---\n:");
	printf("Fahrenheit: %.2f F\n",fahrenheit);
	printf("Celsius:    %.2f C\n",celsius);
	return 0;
}