#define _CRT_SECURE_NO_DEPRECATE 
#include <stdio.h> 
#include <locale.h> 
#include <stdlib.h> 
#define _USE_MATH_DEFINES 
#include <math.h> 

int main()
{
	setlocale(LC_CTYPE, "RUS");

	int n = 0;
	printf("�������� ���-�� ��-�� � �������:");
	scanf("%d", &n);

	int a[1000];
	int temp = 0;

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &temp);
		a[i] = temp;
	}

	for (int j = 0; j < n; j++)
		printf("%d", a[j]);

	int min = 1000000;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
			sum = a[i + 1] + a[i + 2] + a[i + 3];
		}
	}
	printf("\n������������ ��-�: %d, � ����� ��� �������� ��-�� ����� ����: %d", min, sum);
}