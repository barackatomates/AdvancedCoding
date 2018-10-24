#include <iostream>
#include <cstring>
#include "PointColor.hh"

using namespace std;


//-------------Constructors-------------
PointColor::PointColor()
	:Point()
{
	this->color = new char[5];
	strcpy(color, "None");
}

PointColor::PointColor(double a, double o,const char* col)
	:Point(a,o)
{
	this->color = new char[strlen(col)];
	strcpy(color, col);
}

PointColor::PointColor(const PointColor &P)
{
	//PointColor(P.getAbs(),P.getOrd(), P.color);
	
	this->setAbs(P.getAbs());
	this->setOrd(P.getOrd());
	
	this->color = new char[strlen(P.color)];
	strcpy(color, P.color);
}

//-------------Getters & Setters-------------

char* PointColor::getColor() const
{
	return color;
}

void PointColor::setColor(const char* col)
{
	this->color = new char[strlen(col)];
	strcpy(color, col);
}

//-------------Traitement-------------
void PointColor::Afficher()
{
	Point::Afficher();
	cout<< " Color: "<<color << endl;
}

void PointColor::ChangeColor(const char* col)
{	
	delete[] color;
	this->color = new char[strlen(col)];
	strcpy(color, col);
}

PointColor::~PointColor()
{
	delete[] color;
}

//-------------OPERATOR-------------
PointColor& PointColor::operator =(const PointColor &other)
{
	if(this != &other)
	{
		this->Point::Cloner(other);
		memcpy(color, other.getColor(), strlen(other.getColor()));
	}
	
	return *this;
}

//-------------MAIN-------------
int main()
{
	PointColor A = PointColor();
	PointColor B = PointColor(8.0,6.0, "Red");
	PointColor C = PointColor(A);
	
	A.Afficher();
	B.Afficher();
	C.Afficher();
	
	B.ChangeColor("Green");
	
	C = B;
	C.Afficher();
	
	cout<< endl;
	return 0;
}
