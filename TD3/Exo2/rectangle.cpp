#include "rectangle.hh"
#include <iostream>
using namespace std;

//I'm tired so will make a """"rectangle""""
Rectangle::Rectangle(double x1,double y1,double x2,double y2,double x3,double y3, double x4,double y4)
{
	if(x1 == x3 && y1 == y2 && x4 == x2 && y4 == y3)
	{
		S1 = Segment(x1,y1,x2,y2);
		S2 = Segment(x3,y3,x4,y4);
		
		S3 = Segment(x1,y1,x3,y3);
		S4 = Segment(x2,y2,x4,y4);
	}
	else
		cout << "Not a Rectangle, defaulting to 0" << endl;
}

void Rectangle::Afficher()
{
	S1.Afficher();
	S2.Afficher();
	S3.Afficher();
	S4.Afficher();
}

void Rectangle::Deplacer(const int x, const int y)
{
	S1.Deplacer(x,y);
	S2.Deplacer(x,y);
	S3.Deplacer(x,y);
	S4.Deplacer(x,y);
}

/*int main()
{
	Rectangle Gle = Rectangle(10,10,15,10,10,5,15,5);
	Gle.Afficher();
	Gle.Deplacer(5,10);
	cout << endl;
	Gle.Afficher();
}*/
