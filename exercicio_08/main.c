#include <stdio.h>
#include <math.h>

int	main(void)
{
	double	a;
	double	b;
	double	bquadrado;
	double	c;
	double	delta;
	double	raizdelta;
	double	x1;
	double	x2;

	printf("Qual o valor de A? \n");
	scanf("%lf", &a);
	printf("Qual o valor de B? \n");
	scanf("%lf", &b);
	printf("Qual o valor de C? \n");
	scanf("%lf", &c);
	bquadrado = pow (b, 2);
	delta = bquadrado - (4*a*c);
	if (delta <0)
	{
		printf("A equacao nao admite solucao real\n");
		printf("Delta vale %.2lf\n", delta);
	}
	else {
		raizdelta = sqrt (delta);
		x1 = (-b - raizdelta) / (2 * a);
		x2 = (-b + raizdelta) / (2 * a);
		printf("X1 vale %.2lf\n", x1);
		printf("X2 vale %.2lf\n", x2);
		printf("Delta vale %.2lf\n", delta);
	}
	return (0);
}
