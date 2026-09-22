#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* @brief считывает введённое значение и проверяет его на корректность
* @return считанное значение
*/
double GetValue();

/*
* @brief рассчитывает сумму введенных чисел
* @param a - первое число
* @param b - второе число
* @return сумма чисел
*/
double SumOfNumbers(const double a, const double b);

/*
* @brief рассчитывает разность введенных чисел
* @param a - первое число
* @param b - второе число
* @return разность чисел
*/
double DifferenceOfNumbers(const double a, const double b);

/*
* @brief рассчитывает произведение введенных чисел
* @param a - первое число
* @param b - второе число
* @return произведение чисел
*/
double ProductOfNumbers(const double a, const double b);

/*
* @brief рассчитывает частное от деления введенных чисел
* @param a - первое число
* @param b - второе число
* @return частное от деления чисел
*/
double QuotientOfNumbers(const double a, const double b);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main()
{
	double a = GetValue();
	double b = GetValue();
	printf("a + b = : %.2lf\n", SumOfNumbers(a, b));
	printf("a - b = : %.2lf\n", DifferenceOfNumbers(a, b));
    printf("a * b = : %.2lf\n", ProductOfNumbers(a, b));
    printf("a / b = : %.2lf\n", QuotientOfNumbers(a, b));
    printf("b / a = : %.2lf\n", QuotientOfNumbers(b, a));
	return 0;
}

double GetValue()
{
	double value = 0;
	if (scanf("%lf", &value) != 1)
	{
		printf("Error: incorrect type");
		exit(1);
	}
	return value;
}


double SumOfNumbers(const double a, const double b)
{
	return (a + b);
}

double DifferenceOfNumbers(const double a, const double b)
{
	return (a - b);
}

double ProductOfNumbers(const double a, const double b)
{
	return (a * b);
}

double QuotientOfNumbers(const double a, const double b)
{
	return (a / b);
}
