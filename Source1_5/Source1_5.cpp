#include "RightAngled.h"

using namespace std;

int main()
{
	RightAngled r;
	r.Read();
	r.Display();
	//r.toString();
	//cout << "Area =" << r.getArea() << endl;
	cout << endl;
	Triangle l;
	l.Read();
	l.Display();
	
	cout << "perimeter = "<< l.perimeter() << endl;
	cout << "angle A :" << l.AngleA() << endl;
	cout << "angle B :" << l.AngleB() << endl;
	cout << "angle C :" << l.AngleC() << endl;

	

	return 0;
}