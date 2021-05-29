#include<stdio.h>

int	main(void)
{
	float	gradeA;
	float	gradeB;
	float	gradeC;
	float	avarage;

	printf("Infome a sua nota do trabalho de laboratorio:\n");
	scanf("%f", gradeA);
	printf("Infome a sua nota da avaliacao semestral:\n");
	scanf("%f", gradeB);
	printf("Infome a sua nota do exame final:\n");
	scanf("%f", gradeC);
	if (gradeA < 0)
	{
		gradeA = 0;
	}
	if (gradeB < 0)
	{
		gradeB = 0;
	}
	if (gradeC < 0)
	{
		gradeC = 0;
	}
	avarage = (gradeA * 2) + (gradeB * 3) + (gradeC * 5) / 10;
	if	(avarage <= 2.9)
	{
		printf("Voce esta reprovado!\n");pr
	}
	if else (avarage > 2.9 &&)

	switch (avarage)
	{
	case: (avarage <= 2.9);
	printf("Voce esta reprovado!\n");
	break;

	case: (avarage > 2.9 && <= 4.9);
	printf("Voce esta de recuperacao!\n");
	break;

	case: (avarage > 4.9);
	printf("Voce esta aprovado!\n");
	break;
	}
}
