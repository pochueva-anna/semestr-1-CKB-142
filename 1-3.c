#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
* @brief считывает введённое значение и проверяет его на корректность
* @return считанное значение
*/
double GetValue();

/*
* @brief рассчитывает на сколько градусов изменится температура чайной ложки заданной массы при отдаче заданного количества теплоты
* @param m - масса ложки
* @param q - количество теплоты
* @return изменение градусов
*/
double ChangeOfTemperature(const double m, const double q);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main()
{
	double m = GetValue();
	double q = GetValue();
	printf("Температура изменилась на %.2lf градусов", ChangeOfTemperature(m, q));
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


double ChangeOfTemperature(const double m, const double q)
{
    double c = 460;
    return(q / (c * m * 0.001));
}
