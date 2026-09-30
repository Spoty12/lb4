#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int ma()
{
	setlocale(LC_CTYPE, "RUS");

	float x;

	printf("Введите вещественное число:");
	scanf("%f", &x);

	printf("Целая часть: %d\n",(int)x);
	printf("Дробная часть:%f\n - (int)x");

	return 0;

}