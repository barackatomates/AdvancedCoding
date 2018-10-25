#include <iostream>
#include "Point.cpp"

using namespace std;

enum color {Blanc, Bleu, Violet, Vert, Rouge};

const char* coul[5]={"Blanc", "Bleu", "Violet", "Vert", "Rouge"};

class PointColor: public Point
{
	private:
		int couleur;
	
	public:
		PointColor(double abs, double ord, int c) : Point(abs, ord)
		{
			couleur = c;
		}
		void Afficher()
		{
			Point::Afficher();
			cout  << ", couleur = " << coul[couleur] << endl;
		}
		
		~PointColor()
		{
			cout << "\n";
			cout << "Destruction du point color: x = "<< this->getAbs() << " y = " << this->getOrd() << ", couleur = " << coul[couleur] << endl;
		}
};

int main()
{
	cout << "boop" << endl;
	PointColor pc = PointColor(2.3,6.9, Rouge);
	Point p = Point(0.5,-2.9);
	Point *pp = (&pc);
	pc.Afficher();
	cout << "boop" << endl;
	p.Afficher();
	
	pp->Afficher();
	
	pp=new PointColor(100.0, 5.8, Vert);
	delete pp;
	pp = NULL;
}
