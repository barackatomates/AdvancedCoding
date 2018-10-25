#ifndef SEG
#define SEG
#include "segment.cpp"
#endif

class Triangle : public Segment
{
	private:
		Segment S1;
		Segment S2;
		Segment S3;
	public:
	
		Triangle(double x1,double y1,double x2,double y2,double x3,double y3);
		void Deplacer(const int x, const int y);
		void Afficher();
};
