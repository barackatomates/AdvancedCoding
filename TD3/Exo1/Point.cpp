#include <iostream>
#include "Point.hh"
using namespace std;

	double Point::getAbs() const {return abs;}
	double Point::getOrd() const {return ord;}
	
	void Point::setAbs(double a){abs = a;}
	void Point::setOrd(double o){ord = o;}
	
	Point::Point()
	{
		abs = ord = 0;
	}
	
	Point::Point(double abs, double ord)
	{
		this->abs = abs;
		this->ord = ord;
	}
	
	Point::Point(const Point&P)
	{
		this->abs = P.getAbs();
		this->ord = P.getOrd();
		//this->abs = p.abs;
		//this->ord = p.ord;
	}
	
	void  Point::Afficher()
	{
		cout << this->abs << " " << this->ord;
	}
	
	void  Point::Cloner(const Point &P)
	{
		this->abs = P.getAbs();
		this->ord = P.getOrd();
	}
	
	void Point::Deplacer(const int x, const int y)
	{
		abs += x;
		ord += y;
	}
	
	Point::~Point()
	{
		//cout << "EXPLOSION !" << endl;
	}


	
