#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>

/*
* @brief считывает введённое значение и проверяет его на корректность
* @return считанное значение
*/
double GetValue();

/*
*@param min - минимум из x и y
*@param max - максимум из x и y
*/

/*
* @brief находит минимум из двух чисел
* @return минимальное число
*/
double Minimum(const double x, const double y);

/*
* @brief находит максимум из двух чисел
* @return максимальное число
*/
double Maximum(const double x, const double y);

/*
* @brief проверяет, что введенные числа не равны
*/
void CheckValue(const double x, const double y);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main()
{
	double x = GetValue();
	double y = GetValue();
    printf("x - %f, y - %f\n", x, y);
    CheckValue(x, y);
    double min = Minimum(x, y);
    double max = Maximum(x ,y);
    if (fabs(x - min) <= DBL_EPSILON)
    {
        x = (min + max)/2;
        y = 2*min*max;
    }
    else 
    {
        x = 2*min*max;
        y = (min + max)/2;
    }
	printf("New x - %f, new y - %f ", x, y);
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


double Minimum(const double x, const double y)
{
     if (x < y)
     {
        return x;
     }
     if (y < x)
     {
        return y;
     }

}

double Maximum(const double x, const double y)
{
     if (x > y)
     {
        return x;
     }
     if (y > x)
     {
        return y;
     }
 
}

void CheckValue(const double x, const double y)
{
    if (fabs(x - y) <= DBL_EPSILON)
    {
        printf("Error, the numbers are equal");
        exit(1);
    }
}
