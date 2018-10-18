#include "../Exo1/Point.cpp"
class Form
{
	protected:
		Point A;
	private:
		char* color;
	public:
		
		virtual void Afficher() = 0;
		virtual void Deplacer(const int x,const int y) = 0;
		Point getPoint(){return A;};
		~Form(){};
};
