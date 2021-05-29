#include <stdio.h>

int	main(void)
{
	float	value;

	printf("Qual e sua altura?\n");
	scanf("%f", &value);
	printf("A sua altura e, %.2f\n", value);
	return (0);
}
