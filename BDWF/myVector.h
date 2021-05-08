#pragma once
#include <iostream>
#include <cmath>

template <typename T> // тип данных компонент вектора
class myVector// компоненты вектора в декартовых координатах
{
public:
	T x; // проекция вектора на ось x
	T y; // проекция вектора на ось y
	T z; // проекция вектора на ось z

	myVector(const myVector <T>& v)
	{
		x = v.x;
		y = v.y;
		z = v.z;
	}

	myVector(T x = static_cast<T>(0), T y = static_cast<T>(0), T z = static_cast<T>(0))
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void show()
	{
		std::cout << x << " " << y << " " << z << std::endl;
	}

	T mag2()
	{
		return x * x + y * y + z * z;
	}

	T mag()
	{
		return sqrt(x * x + y * y + z * z);
	}

	T dot(myVector <T>& v)
	{
		return sqrt(x * v.x + y * v.y + z * v.z);
	}

	myVector <T> cross(myVector <T>& v)
	{
		return myVector <T>(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
	}

	myVector <T> norm()
	{
		return myVector <T>(*this) / sqrt(x * x + y * y + z * z);
	}

	T proj(myVector <T>& v)
	{
		return *this->dot(v.norm());
	}

	myVector <T> vProj(myVector <T>& v)
	{
		return v.norm() * *this->proj(v);
	}

	T angle(myVector <T>& v)
	{
		return acos(*this->dot(v) / (*this->mag() * v.mag()));
	}
	
	myVector <T> rotate(myVector <T>& v, T& theta)
	{
		myVector <T> n = v.norm();

		T cT = cos(theta), sT = sin(theta);

		myVector <T> tmp;

		tmp.x = (cT + (1 - cT) * n.x * n.x) * x + ((1 - cT) * n.x * n.y - sT * n.z) * y +
			((1 - cT) * n.x * n.z + sT * n.y) * z;
		tmp.y = ((1 - cT) * n.x * n.y + sT * n.z) * x + (cT + (1 - cT) * n.y * n.y) * y +
			((1 - cT) * n.y * n.z - sT * n.x) * z;
		tmp.z = ((1 - cT) * n.x * n.z - sT * n.y) * x + ((1 - cT) * n.y * n.z + sT * n.x) * y +
			(cT + (1 - cT) * n.z * n.z) * z;

		return tmp;
	}

	myVector operator= (const myVector <T>& v) // Перегрузка оператора =
	{
		x = v.x;
		y = v.y;
		z = v.z;

		return *this;
	}

	myVector operator+ (const myVector <T>& v) // Перегрузка оператора +, определяет правило сложения векторов
	{
		return myVector <T> (x + v.x, y + v.y, z + v.z);
	}

	myVector operator- (const myVector <T>& v) // Перегрузка оператора -, определяет правило вычитания векторов
	{
		return myVector <T>(x - v.x, y - v.y, z - v.z);
	}

	myVector operator- () // Перегрузка оператора -, определяет антипараллельный вектор
	{
		x *= -static_cast<T>(1);
		y *= -static_cast<T>(1);
		z *= -static_cast<T>(1);

		return *this;
	}

	myVector operator* (const T& a) // Перегрузка оператора *, определяет правило умножение вектора на число
	{
		return myVector <T>(x * a, y * a, z * a);
	}

	myVector operator/ (const T& a) // Перегрузка оператора /, определяет правило деления вектора на число
	{
		if (a != static_cast<T>(0))
		{
			return myVector <T>(x / a, y / a, z / a);
		}
		else
		{
			setlocale(LC_ALL, "Russian");
			std::cout << "Деление вектора на ноль!" << std::endl;
			system("pause");
			exit(1);
		}
	}

	void operator+=(const myVector <T>& v) 
	{
		*this = *this + v;
	}

	void operator-=(const myVector <T>& v)
	{
		*this = *this - v;
	}

	void operator*=(const T& a)
	{
		*this = *this * a;
	}

	void operator/=(const T& a)
	{	
		if (a != static_cast<T>(0))
		{
			*this = *this / a;
		}
		else
		{
			setlocale(LC_ALL, "Russian");
			std::cout << "Деление вектора на ноль!" << std::endl;
			system("pause");
			exit(1);
		}
	}

	~myVector()
	{

	}
};