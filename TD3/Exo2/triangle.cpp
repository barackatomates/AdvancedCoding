#include "triangle.hh"
#include <iostream>
using namespace std;

Triangle::Triangle(double x1,double y1,double x2,double y2,double x3,double y3)
{
	S1 = Segment(x1,y1,x2,y2);
	S2 = Segment(x1,y1,x3,y3);
	S3 = Segment(x2,y2,x3,y3);
}

void Triangle::Afficher()
{
	S1.Afficher();
	S2.Afficher();
	S3.Afficher();
}

void Triangle::Deplacer(const int x, const int y)
{
	S1.Deplacer(x,y);
	S2.Deplacer(x,y);
	S3.Deplacer(x,y);
}

/*int main()
{
	Triangle Gle = Triangle(12,12,4,3,9,5);
	Gle.Afficher();
	Gle.Deplacer(5,10);
	cout << endl;
	Gle.Afficher();
}*/
