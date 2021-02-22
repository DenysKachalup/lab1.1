//////////////////////////////
//Line.h
#pragma once
class Line
{
private:
	 double first, second;

public:
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(double value) { first = value; }
	void SetSecond(double value) { second = value; }

	bool Init(double x, double y);
	void Display() const;
	void Read();
	void root();
};

