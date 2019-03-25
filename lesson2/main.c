#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

//������� ������

//1.	����������� ������� �������� ����� �� ���������� ������� � ��������, ��������� ��������.
//2.	����������� ������� ���������� ����� a � ������� b :
//a.��� ��������.
//b.����������.

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

	//1.	����������� ������� �������� ����� �� ���������� ������� � ��������, ��������� ��������.
	unsigned int a1;
	printf("����������� ������� �������� ����� �� ���������� ������� � ��������, ��������� ��������.");
	printf("\n������� ����� �����: ");
	scanf("%d", &a1);
	printf("\n�������� �����:");
	DecToBin(a1);

	//2.	����������� ������� ���������� ����� a � ������� b:
		//a.��� ��������
	int a2;
	int b2;
	int bb;
	int rez = 1;
	printf("\n����������� ������� ���������� ����� a � ������� b\n");
	printf("������� ����� � ������� ����� ������:");
	scanf("%d %d", &a2, &b2);
	bb = b2;
	while (bb > 0)
	{
		rez = a2 * rez;
		bb--;
	}
	printf("\n��������� ��� ��������: %d", rez);
	//b.����������
	printf("\n��������� � ���������: %d", power(a2, b2));
}