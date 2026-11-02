#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

/*
* @brief считывает введённое значение и проверяет его на корректность
* @return считанное значение
*/
double getValue();

/*
* @brief проверяет, что шаг больше нуля
*/
void checkStep(const double step);

/*
* @brief проверяет, что начальное число меньше конечного
*/
void checkSegment(const double xbegin,const double xend);

/*
* @brief проверяет, что x попадает в область допустимых значений
* @return 1, если значение попадает в одз, 0 если нет
*/
bool isOOF(const double x);

/*
* @brief высчитывает значение y по заданной формуле и введенному x
* @return значение y
*/
double getY(const double x);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main()
{
    double xbegin = getValue();
    double xend = getValue();
    double step = getValue();
    checkStep(step);
    checkSegment(xbegin,xend);
    for (double x = xbegin; x < xend + step; x += step)
    {
        if (isOOF(x))
            {
                printf("x = %lf, y = %lf\n",x, getY(x));
            }
        else
            {
                printf("y is not defined\n");
            }
    }
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

void checkStep(const double step)
{
    if (step <= 0)
    {
        printf("Error, step have to be > 0");
        exit(1);
    }
}

void checkSegment(const double xbegin,const double xend)
{
    if (xbegin > xend)
    {
        printf("Error, segment begin have to be less or equal segment end");
        exit(1);
    }
}

bool isOOF(const double x)
{
    return (x > 0);
}

double getY(const double x)
{
    return sin(log(x)) - cos(log(x)) + 2 * log(x);
}
