#define _CRT_SECURE_NO_WARNINGS // ��� ����������� ������������� scanf
#include <stdio.h>
#include <math.h>
#include <locale.h>

//������� ������

//1.	����������� ������� �������� ����� �� ���������� ������� � ��������, ��������� ��������.
//2.	����������� ������� ���������� ����� a � ������� b :
//a.��� ��������.
//b.����������.


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