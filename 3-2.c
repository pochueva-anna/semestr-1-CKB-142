#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>

/*
* @brief считывает введённое значение n и проверяет его на корректность
* @return считанное значение
*/
int getInt();
/*
* @brief считывает введённое значение e и проверяет его на корректность
* @return считанное значение
*/
double getValue();
/*
* @brief проверяет, что введенное n > 0
* @param n - количество членов последовательности
*/
void checkPositive(const int n);
/*
* @brief проверяет, что введенное e > 0
* @param e - число, с которым будут сравниваться члены последовательности по модулю
*/
void checkEpsilon(const double e);
/*
* @brief считает сумму n членов последовательности
* @param n - количество членов последовательности
* @return полученное значение
*/
double sumN(const int n);
/*
* @brief считает сумму членов последовательности, по модулю больших чем e
* @param e - число, с которым будут сравниваться члены последовательности по модулю
* @return полученное значение
*/
double sumE(const double e);
/*
* @brief высчитывает коэффициент
* @param i - номер члена последовательности
* @return полученное значение
*/
double getCoef(const int i);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main() 
{
int n = getInt();
checkPositive(n);
double e = getValue();
checkEpsilon(e);
printf("Summ of %d elements is: %lf\n",n,sumN(n));
printf("Summ of elements that are not less than %lf is: %lf\n",e,sumE(e));
return 0;
}

double getValue()
{
    double value = 0;
    if (scanf("%lf", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

int getInt()
{
    int value = 0;
    if (scanf("%d", &value)!= 1)
    {
        printf("Input error");
        exit(1);
    }
    return value;
}

void checkPositive(const int n)
{
    if (n <= 0)
    {
        printf("Error, n have to be positive\n");
        exit(1);
    }
}

void checkEpsilon(const double e)
{
        if (e <= 0)
    {
        printf("Error, e have to be positive\n");
        exit(1);
    }
}

double sumN(const int n)
{
    double a = -1.0;
    double result = a;
    for (int i = 1; i < n; i++)
    {
        a *= getCoef(i); 
        result += a; 
    }
    return result;
}

double getCoef(const int i)
{
    return -1.0/pow((i + 1), 2);
}

double sumE(const double e)
{
    double a = -1.0;
    double result = 0;
    for (int i = 1; fabs(a) >= e - DBL_EPSILON; i++)
    {
        result += a;
        a *= getCoef(i);
    }
    return result;
}
