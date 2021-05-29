#include<stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	c;
	int	result;

	printf("Digite três valores: \n");
	scanf("%d %d %d", &a, &b, &c);
	result = a + b + c;
	printf("A soma é: %d\n", result);
	return (0);
}
