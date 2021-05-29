#include<stdio.h>

int	main()
{
	float gradeA;
	float gradeB;
	float gradeC;
	float avarage;

	printf("informe as notas do aluno");
	scanf("%f %f %f", &gradeA, &gradeB, &gradeC);

	if(gradeA < 0){
		gradeA = 0;
	}
	if(gradeB < 0){
		gradeB = 0;
	}
	if(gradeC < 0){
		gradeC = 0;
	}

	avarage = gradeA + gradeB + gradeC;
}
