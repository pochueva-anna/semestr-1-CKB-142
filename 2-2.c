#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение или ошибку при неверном типе данных
 */
double getDouble();

/**
 * @brief Считает значение y по данной формуле при заданном x
 * @return Значение y при заданном x
 */
double y(const double x);

int main()
{
    printf("Enter x: \n");
    double x = getDouble();
    printf("y = %lf",y(x));
    return 0;
}

double getDouble()
{
    double value = 0.0;
    if (scanf("%lf",&value) != 1)
        {
            printf("Error: invalid type x");
            exit(1);
        }
    return value;
}

double y(const double x)
{
	const double a = 1.65;
    if (x < 1.34)
        {
            return M_PI * pow(x, 2) - 7 / (pow(x, 2));
        }
    if (x > 1.4)
        {
            return log(x + 7 * sqrt(x + a));
        }
    if ((x - 1.4) < DBL_EPSILON)
        {
            return log(x + 7 * sqrt(x + a));
        }
    else
        {
            return 777777;
        }

}
