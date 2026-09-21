#include <stdio.h>
#include <math.h>

/*
* @brief рассчитывает функцию A по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @param z - значение параметра z
* @return рассчитанное значение
*/
double GetA(const double x, const double y, const double z);

/*
* @brief рассчитывает функцию B по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @param z - значение параметра z
* @return рассчитанное значение
*/
double GetB(const double x, const double y, const double z);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/
int main()
{
 const double X = -2.9;
 const double Y = 15.5;
 const double Z = 1.5;
 printf("a = %lf\n", GetA(X, Y, Z));
 printf("b = %lf\n", GetB(X, Y, Z));
 return 0;
}

double GetA(const double x, const double y, const double z)
{
 return (double)(sqrt(pow(x, 2) + y) - pow(y, 2) * pow(sin((x + z) / x), 3));
}

double GetB(const double x, const double y, const double z)
{
 return (double)(pow(cos(pow(x, 3)), 2) - (x / (sqrt(pow(x, 2) + pow(y, 2)))));
}
