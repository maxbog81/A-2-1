#define _CRT_SECURE_NO_WARNINGS // для возможности использования scanf
#include <stdio.h>
#include <math.h>
#include <locale.h>

//Богатов Максим

//1.	Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
//2.	Реализовать функцию возведения числа a в степень b :
//a.Без рекурсии.
//b.Рекурсивно.


void DecToBn(int x)
{
	if (x > 2)
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