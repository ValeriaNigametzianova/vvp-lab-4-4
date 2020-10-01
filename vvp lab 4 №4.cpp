#include<stdio.h>
#include<math.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, A, B, s, r, p;
	double ch;
	printf("a = ");
	scanf_s("%f", &a);
	printf("b = ");
	scanf_s("%f", &b);
	if ((a == 0) & (b == 0))
	{
		printf("Нельзя ввести 0,введите другое число.");
		
	}
	else
	{
		A = pow(a, 2);
		B = pow(b, 2);
		s = A + B;
		r = A - B;
		p = A * B;
		ch = (double)A / B;
		printf("Сумма квадратов a и b: %f\nРазность квадратов a и b: %f\nПроизведение квадратов a и b: %f\nЧастное квадратов a и b: %lf", s, r, p, ch);
	}
	return 0;
}

