#include <stdio.h>
#include <math.h>

int	main(void)
{
	float	number;
	float	raizquadrada;

	printf("QUAL É A RAIZ QUADRADA?\n");
	printf("Digite um numero:\n");
	scanf("%f", &number);
	if (number >= 0)
	{
		raizquadrada = sqrt (number);
		printf("A raiz quadrada de %f é: %f\n", number, raizquadrada);
	}
	else
	{
		printf("Número inválido\n");
	}
	return (0);
}
