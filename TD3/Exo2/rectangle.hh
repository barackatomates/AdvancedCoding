#ifndef SEG
#define SEG
#include "segment.cpp"
#endif

class Rectangle : public Segment
{
	private:
		Segment S1;
		Segment S2;
		Segment S3;
		Segment S4;
		
	public:
	
		Rectangle(double x1,double y1,double x2,double y2,double x3,double y3, double x4,double y4);
		void Deplacer(const int x, const int y);
		void Afficher();
};
