#include <iostream>
#include <cstring>
#include "PointColor.hh"

using namespace std;

PointColor::PointColor()
{
	this->setAbs(0.0);
	this->setOrd(0.0);
	
	this->color = new char[5];
	strcpy(color, "None");
}

PointColor::PointColor(double a, double o,const char* col)
{
	this->setAbs(a);
	this->setOrd(o);
	
	this->color = new char[strlen(col)];
	strcpy(color, col);
}

PointColor::PointColor(const PointColor &P)
{
	this->setAbs(P.getAbs());
	this->setOrd(P.getOrd());
	
	this->color = new char[strlen(P.color)];
	strcpy(color, P.color);
}

char* PointColor::getColor() const
{
	return color;
}

void PointColor::setColor(const char* col)
{
	this->color = new char[strlen(col)];
	strcpy(color, col);
}

void PointColor::Afficher()
{
	Point::Afficher();
	cout<< color << endl;
}

PointColor::~PointColor()
{
	delete[] color;
}

int main()
{
	PointColor A = PointColor();
	PointColor B = PointColor(8.0,6.0, "Red");
	PointColor C = PointColor(A);
	
	A.Afficher();
	B.Afficher();
	C.Afficher();
	
	cout<< endl;
	return 0;
}
