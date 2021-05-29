#include<stdio.h>

int	main(void)
{
	double	gradeA;
	double	gradeB;
	double	gradeC;
	double	avarage;

	printf("Informe a sua nota do trabalho de laboratorio:\n");
	scanf("%lf", &gradeA);
	printf("Informe a sua nota da avaliação semestral:\n");
	scanf("%lf", &gradeB);
	printf("Informe a sua nota do exame final:\n");
	scanf("%lf", &gradeC);
	avarage = ((gradeA * 2.0) + (gradeB * 3.0) + (gradeC * 5.0)) / 10;
	if (avarage <= 2.9)
	{
		printf("Voce esta reprovado!\n");
	}
	else if (avarage > 2.9 && avarage <= 4.9)
	{
		printf("Voce esta de recuperação!\n");
	}
	else
	{
		printf("Voce esta aprovado com média! %.2lf\n", avarage);
	}
	return (0);
}
