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
* @brief считывает введённое целочисленное значение и проверяет его на корректность
* @return считанное значение
*/
int getInt();



enum Operations {
    Sum = 1,
    Difference, 
    Product, 
    Quotient
};



/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main()
{
    printf("Enter operation %d - Sum, %d - Difference, %d - Product, %d - Quotient:\n ", Sum, Difference, Product, Quotient);
    int operation = getInt();
    double a = GetValue();
	double b = GetValue();
    switch (operation) {
        case Sum:
        printf("a + b = %.2lf\n", SumOfNumbers(a, b));
        break;
        case Difference:
        printf("a - b = %.2lf\n", DifferenceOfNumbers(a, b));
        break;
        case Product:
        printf("a * b = %.2lf\n", ProductOfNumbers(a, b));
        break;
        case Quotient:
        printf("a / b = %.2lf", QuotientOfNumbers(a, b));
        break;
    }
	return 0;
}

double GetValue()
{
	double value = 0;
	if (!scanf("%lf", &value))
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

int getInt()
{
    int value = 0;
    if (scanf("%d",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}
