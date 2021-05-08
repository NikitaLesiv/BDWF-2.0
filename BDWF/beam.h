#pragma once
#include "myVector.h"
#include "constants.h"
#include <cmath>

class particle
{
public:
	long double m; // масса частицы
	long double q; // электрический заряд частицы

	myVector <long double> r; // радиус-вектор частицы
	myVector <long double> p; // вектор импульса частицы

	particle()
	{

	}

	long double energy()
	{
		return c * sqrt(p.mag2() + m * m * c * c);
	}

	long double gamma()
	{
		return 1 / sqrt(1 - 1 / (1 + m * m * c * c / p.mag2()));
	}

	~particle()
	{

	}
};
