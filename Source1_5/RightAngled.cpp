#include "RightAngled.h"
#include <iostream>
#include <sstream>

using namespace std;

void RightAngled::Init( Triangle triangle)
{
	triangle.setC(sqrt(triangle.getA() * triangle.getA() + triangle.getB() * triangle.getB()));
	setTriangle(triangle);
	setArea(this->calcArea());
	//setArea(area);
}
void RightAngled::Read()
{
	//int area;
	Triangle t;
	cout << endl;
	cout << "Triangle : " << endl;
	t.Read();
	this->Init(t);
	//cout << "Area = "; cin >> area;
	//Init(t,area);
}
//string RightAngled::toString() const
//{
//	stringstream sout;
//	sout << endl;
//	sout << "triangle =" << endl;
//	triangle.Display();
//	sout << "area = " << area << endl;
//	return sout.str();
//}
void RightAngled::Display() const
{
	//cout << toString() << endl;
	cout << endl;
	cout << "triangle :" << endl;
	triangle.Display();
	cout << "area = " << getArea() << endl;
}

 double RightAngled::calcArea()
{
	double p = triangle.perimeter() / 2;
	return sqrt(p * (p - triangle.getA()) * (p - triangle.getB()) * (p - triangle.getC()) );
}
