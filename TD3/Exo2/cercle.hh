#ifndef FORM
#define FORM
#include "Form.hh"
#endif

class cercle : public Form
{
	private:
		int diam;
	public:
	
		cercle(int x, int y, int dim);
		void Afficher();
		void Deplacer(const int x,const int y);
};
