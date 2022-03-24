#pragma once
#include <string>
class Triangle
{
private:
	int a, b, c;
public:
	int getA() const { return a; }
	int getB() const { return b; }
	int getC() const { return c; }

	void setA(int a) { this->a = a; }
	void setB(int b) { this->b = b; }
	void setC(int c) { this->c = c; }

	void Init(int a, int b, int c);
	//string toString() const;
	void Display() const;
	void Read();


	int perimeter();
	double AngleA();
	double AngleB();
	double AngleC();
};

