#include <iostream>
#include "segment.hh"

using namespace std;

Segmen

Segment::Segment(double xA, double yA, double xB, double yB)
{
	A.setAbs(xA);
	A.setOrd(yA);
	
	B.setAbs(xB);
	B.setOrd(yB);
}

void Segment::Afficher()
{
	cout << "[";
	Form::getPoint().Afficher();
	cout << ",";
	B.Afficher();
	cout << "]" << endl;
}

void Segment::Deplacer(const int x, const int y)
{
	Form::getPoint().Deplacer(x,y); 																	//if A was not protected but private (i'm a lazy fucker today) [that means i f*** lazy people, including myself]
	B.Deplacer(x,y);
}

/*int main()
{
	Segment S = Segment(15.0,9,3,5);
	S.Afficher();
	S.Deplacer(5,2);
	S.Afficher();
	return 0;
}
*/
