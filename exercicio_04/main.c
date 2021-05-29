#include <stdio.h>

int	main(void)
{
	float	inches;
	float	centimeters;

	printf("Informe valor em polegadas: \n");
	scanf("%f", &inches);
	centimeters = inches * 2.54;
	printf("A conversão em centímetros é: %.2f\n", centimeters);
	return (0);
}
