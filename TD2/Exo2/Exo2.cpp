#include "Exo2.h"
#include <iostream>
#include <stdlib>
#include <math.h>
using namespace std;

#ifdef Tab_DYNAMIQUE

Vector::Vector(int d)
{
	if(d<=1)
	{
		cout"dimension <=1 on donne un entier à 0 mais c'est parcequ'on est sympa\n";
		vect = new int[1];
		vect[0] = 0;
		dim = 1;
		return;		//Alors oui on a le droit
	}
	vect = new int[d];
	dim = d;
	for(int i = 0; i < dim; i++)
	{
		vect[i] = 0;
	}
}

Vector::Vector(const Vector &v)
{
	dim = v.dim;
	vect = new int[dim];
	for(int j = 0; j < dim; j++)	vect[i] = v.vect[i];
}

Vector::~Vector()
{
	delete []vect;
	vect = NULL;
}

Vector& Vector::operator=(const Vector &v)
{
	if(this==&v) return *this; //si c'est lui-même
	
	*this = Vector(v);		   //sinon on le free et copybuild
	return;
}


int main()
{
	
	return 0;
}
