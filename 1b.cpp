#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int m()
{
	setlocale(LC_CTYPE, "RUS");

	char c;

	printf("Введите символ:");
	scanf("%c", &c);

	printf("Шеснадцатеричный код: %d\n", (unsigned char)c);
	printf("Десятичный код: %x\n", (unsigned char)c);

	return 0;
}
