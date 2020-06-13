#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x() const
	{
		return x;
	}
	double get_y() const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	//     Constructors
	
	Point()
	{
		x = y = double();
		cout << "DefaultConstructors:\t" << this << endl;
	}
	Point(double x; double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constructors: " << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t " << this << endl;
	}
	//      Methods:
	void print()const
	{
		cout << x << 
	}

};

//#define STRUCTURES;

void main()
{
	using namespace std;
	setlocale(LC_ALL, "");
#ifdef STRUCTURES

	Point A;
	A.x = 2;
	A.y = 3;
	cout << A.x << " \t " << A.y << endl;

	Point* pA = &A;

	cout << pA->x << " \t " << pA->y << endl;
	cout << (*pA).x << " \t " << (*pA).y << endl;

#endif 

	Point A;
	//A.set_x(2);
	//A.set_y(3);
	cout << A.get_x() << " \t " << A.get_y() << endl;
	Point B(4, 5);
	B.print();
}