#include <stdio.h>

int n()
{
	int a = 11;
	int b = 3;

	int x;
	float y;
	double z;

	x = a / b;
	y = a / b;
	z = a / b;

	printf("x = % d\n", x);
	printf("x = % f\n", y);
	printf("x = % fl\n", z);

	printf("int = % d\n", (int)a/b);
	printf("float = % f\n", (int)a/b);
	printf("double = % fl\n",(int)a/b);



	return 0;
}