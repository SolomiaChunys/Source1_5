#include "Triangle.h"
#include <iostream>
#include <sstream>
#include <cmath>
#define PI 3.1415926535

using namespace std;

void Triangle::Init(int a, int b, int c)
{
	setA(a);
	setB(b);
	setC(c);
}
//string Triangle::toString() const
//{
//	stringstream sout;
//	sout << "katet1 = " << a << endl;
//	sout << "katet2 = " << b << endl;
//	sout << "hypotenuse = " << c << endl;
//	return sout.str();
//}
void Triangle::Display() const
{
	//cout << toString();
	cout << endl;
	cout << "side1 = " << a << endl;
	cout << "side2 = " << b << endl;
	cout << "side3 = = " << c << endl;
	cout << endl;
}
void Triangle::Read()
{
	int a, b, c;
	cout << endl;
	cout << "side1 = "; cin >> a;
	cout << "side2 = "; cin >> b;
	cout << "side3 = "; cin >> c;
	Init(a, b, c);
}
int Triangle::perimeter()
{
	return getA() + getB() + getC();
}
 double Triangle::AngleA()
{
	return (acos(((b * b) + (c * c) - (a * a)) / (2 * b * c))) * 180 / PI;
}
 double Triangle::AngleB()
 {
    return (acos(((a * a) + (c*c) - (b*b)) / (2. * a * c))) * 180 / PI;
 }
 double Triangle::AngleC()
 {
	 return (acos(((a * a) + (b * b) - (c * c)) / (2. * a * b))) * 180 / PI;
 }