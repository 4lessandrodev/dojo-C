#include <stdio.h>
#include <math.h>

int	main(void)
{
	float	catetoa;
	float	catetob;
	float	hipotenusa;

	printf("DESCUBRA A HIPOTENUSA DO TRIANGULO!!!\n");
	printf("Quanto mede o lado A?\n");
	scanf("%f", &catetoa);
	printf("Quanto mede o lado B\n");
	scanf("%f", &catetob);
	hipotenusa = sqrt ((catetoa * catetoa) + (catetob * catetob));
	printf("O valor da hipotenusa e:%.2f\n", hipotenusa);
	return (0);
}
