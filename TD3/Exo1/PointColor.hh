#include "Point.cpp"
class PointColor:public Point
{
	private:
		char* color;
		
	public:
	
	//-------------Constructors-------------
		PointColor();
		PointColor(double a, double o,const char* col);
		PointColor(const PointColor &P);
		
	//-------------Getters & Setters-------------	
		char* getColor() const;
		void setColor(const char* col);
				
	//-------------Traitement-------------
		void Afficher();
		void Cloner(const PointColor &P);
		void ChangeColor(const char* col);
		
	//-------------OPERATOR-------------
		PointColor& operator =(const PointColor &other);
	
		~PointColor();
};

