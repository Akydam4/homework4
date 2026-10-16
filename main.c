#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "");
	int num_A, num_B;
	int condition;
	printf("Введите два целых числа (номера мест Анны и Бориса): ");
	scanf("%d %d", &num_A, &num_B);
	condition = ((num_A % 2 == 0 && num_B % 2 != 0) || (num_A % 2 != 0 && num_B % 2 == 0));
	printf("Пьём кофе? (1 - да, 0 - нет): %d", condition);
	return 0;
}