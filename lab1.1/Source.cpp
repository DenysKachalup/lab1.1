///////////////////////////////////////////
//Source.cpp
#include "Line.h"
#include<iostream>

using namespace std;

Line makeLine(double x, double y)
{
	Line q;
	if (!q.Init(x, y))
		cout << "ERROR" << endl;
	else
		cout << "OK" << endl;
	return q;
}
int main()
{
	Line q;
	q.Read();
	q.Display();
	q.root();
	double x, y;
	cout << "first = "; cin >> x;
	cout << "second = "; cin >> y;
	cout << endl;
	makeLine(x,y);

	return 0;
}