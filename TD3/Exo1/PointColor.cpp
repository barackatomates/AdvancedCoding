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

PointColor::getColor()
{
	return color;
}

int main(){ return 0; }
