#include "Point.cpp"
class PointColor:public Point
{
	private:
		char* color;
		
	public:
		PointColor();
		PointColor(double a, double o,const char* col);
		PointColor(const PointColor &P);
		
		char* getColor() const;
		void setColor(const char* col);
		
		~PointColor();
		
		void Afficher();
		void Cloner(const PointColor &P);
};

