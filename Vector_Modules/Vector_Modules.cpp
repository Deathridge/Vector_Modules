// Vector_Modules.cpp : Defines the entry point for the console application.
//

// Vector.cpp
#include "stdafx.h"
#include "Vector.h"

Vector::Vector(int s)
	:elem{ new double[s] }, sz{ s }
{
}

double& Vector::operator[](int i)
{
	return elem[i];
}

int Vector::size()
{
	return sz;
}

int main()
{

}