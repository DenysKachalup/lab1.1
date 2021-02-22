////////////////////////////////
//Line.cpp
#include "Line.h"
#include <iostream>;
using namespace std;

bool Line::Init(double x, double y)
{
	if (x > 0)
	{
		SetFirst(x);
		SetSecond(y);
		return true;
	}
	else
	{
		cout << "First incorrect" << endl;
		return false;
	}
}	
void Line::Display() const
{ 
	cout << "first = " << first << "\tsecond = " << second << endl;
}
void Line::Read()
{
	double x, y;
	
	do {
		cout << "first = "; cin >> x;
		cout << "second = "; cin >> y;
		cout << endl;
	} while (!Init(x, y));
			
}
void Line::root()
{
	double z;
	z = ((-1.0)*second)/first;
	cout <<"Root: "<< z << endl;
}
