#include "Plot.h"

	void BD::Plot::graphic()
	{
		double a = 0.0, b = 3 * 4;

		double dx = (b - a) / (N - 1);

		for (int i = 0; i < N; ++i)
		{
			double x = a + i * dx;

			chart1->Series[0]->Points->AddXY(x, sin(x));
		}
	}

