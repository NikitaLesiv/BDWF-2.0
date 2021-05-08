#pragma once
#include "myVector.h"
#include "constants.h"
#include <cmath>

class particle
{
public:
	long double m; // ����� �������
	long double q; // ������������� ����� �������

	myVector <long double> r; // ������-������ �������
	myVector <long double> p; // ������ �������� �������

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
