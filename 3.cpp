#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
int maine()
{
	setlocale(LC_CTYPE, "RUS");

	int n;
	int a, b, c;

	printf("Введите целое трехзначное число:");
	scanf("%d", &n);

	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;

	printf("Последняя цифра: %d,Первая цифра: %d, Сумма цифр: %d,Число на оборот: %d%d%d" ,c , a, a + b + c,c,b,a);

	return 0;
}


