#ifndef FORM
#define FORM
#include "Form.hh"
#endif

class Segment : public Form
{
	private:
		Point B;
	public:
		
		Segment();
		Segment(double xA, double yA, double xB, double yB);
		void Afficher();
		void Deplacer(const int x,const int y);
		~Segment(){};
};
