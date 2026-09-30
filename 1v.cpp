#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int mai()
{
	setlocale(LC_CTYPE, "RUS");

	int i;

	printf("Введите десятичное число, соотвествующее 1/i:");
	scanf("%d", &i);

	printf("Результат: %f", 1.0 /i);
	
	return 0;
}