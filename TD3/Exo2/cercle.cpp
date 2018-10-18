#include "cercle.hh"
#include <iostream>
using namespace std;

cercle::cercle(int x, int y, int dim)
{	
	A.setAbs(x);	
	A.setOrd(y);
	
	diam = dim;	
}

void cercle::Afficher()
{
	cout << "Pos: "; A.Afficher(); cout << " Diameter: " << this->diam << endl;
}

void cercle::Deplacer(const int x, const int y)
{
	A.Deplacer(x,y);
}

/*int main()
{
	cercle CIDD = cercle(15,20,9);
	CIDD.Afficher();
	CIDD.Deplacer(100,-30);
	CIDD.Afficher();
	
	return 9001;
}*/
