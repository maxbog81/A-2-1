#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

//Богатов Максим

//1.	Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
//2.	Реализовать функцию возведения числа a в степень b :
//a.Без рекурсии.
//b.Рекурсивно.

void DecToBin(int x)
{
	if (x >= 2)
	{
		DecToBin(x / 2);
	}
	printf("%d", x % 2);
}

int power(int a, int b)
{
	if (b > 0)
		return a * power(a, b - 1);
	return 1;
}

int main(int argc, const char *argv[])
{
	char *locale = setlocale(LC_ALL, "");

	//1.	Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
	unsigned int a1;
	printf("Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.");
	printf("\nВведите целое число: ");
	scanf("%d", &a1);
	printf("\nДвоичное число:");
	DecToBin(a1);

	//2.	Реализовать функцию возведения числа a в степень b:
		//a.Без рекурсии
	int a2;
	int b2;
	int bb;
	int rez = 1;
	printf("\nРеализовать функцию возведения числа a в степень b\n");
	printf("Введите число и степень через пробел:");
	scanf("%d %d", &a2, &b2);
	bb = b2;
	while (bb > 0)
	{
		rez = a2 * rez;
		bb--;
	}
	printf("\nРезультат без рекурсии: %d", rez);
	//b.Рекурсивно
	printf("\nРезультат с рекурсией: %d", power(a2, b2));
}