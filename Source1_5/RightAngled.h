#pragma once
#include <iostream>
#include "Triangle.h"
#include <string>

using namespace std;

class RightAngled
{
private:
	double area;
	Triangle triangle;
public:
	double getArea()const { return area; }
	Triangle getTriangle() const { return triangle; }

	void setArea(double area) { this->area = area; }
	void setTriangle(Triangle triangle) { this->triangle = triangle; }

	void Init(Triangle triangle);
	void Display() const;
	void Read();
	//string toString() const;

	double calcArea();
};

