#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main()
{
	setlocale(LC_ALL, "RUS");
	
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;

	printf("%c\n", c);
	printf("%i\n", i);
	printf("%f\n", f);
	printf("%d\n", d);

	printf("¬ведите целое число:");
	scanf("%c", &c);

	printf("¬ведите целое число:");
	scanf("% i", &i);

	printf("¬ведите число:");
	scanf("%f", &f);

	printf("¬ведите число:");
	scanf("%d", &d);

	printf("%c %i %f %d", c, i, f, d);

	return 0;
}