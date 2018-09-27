
#include <iostream>
using namespace std;

class Point
{
	private:
		double abs;
		double ord;
	public:
	
	double getAbs() const {return abs;}
	double getOrd() const {return ord;}
	
	void setAbs(double a){abs = a;}
	void setOrd(double o){ord = o;}
	
	Point()
	{
		abs = ord = 0;
	}
	
	Point(double abs, double ord)
	{
		this->abs = abs;
		this->ord = ord;
	}
	
	Point(const Point&P)
	{
		this->abs = P.getAbs();
		this->ord = P.getOrd();
		//this->abs = p.abs;
		//this->ord = p.ord;
	}
	
	void Afficher()
	{
		cout << endl;
		cout << this->abs << " " << this->ord;
		cout << endl;
	}
	
	void cloner(const Point &P)
	{
		this->abs = P.getAbs();
		this->ord = P.getOrd();
	}
	
	~Point()
	{
		cout <<endl<<"truc de ouf"<<endl;
	}

};

class Segment
{
	private:
		Point p1;
		Point p2;
		
	public:
		
		Point getP1()const {return p1;}
		Point getP2()const {return p2;}
	
		Segment()
		{
			p1 = Point(3,5);
			p2 = Point(4,4);
		}
		
		Segment(double X1, double Y1, double X2, double Y2)
		{
			p1 = Point(X1,Y1);
			p2 = Point(X2,Y2);
		}
		
		Segment(const Point &A,const Point &B)
		{
			p1 = Point(A);
			p2 = Point(B);
		}
		
		bool estVerticale()
		{
			if(p1.getAbs == p2.getAbs) return true;
				else return false;
		}
		
		bool estHorizontal()
		{
			if(p1.getOrd == p2.getOrd) return true;
				else return false;
		}
		
		bool estVerticale()
		{
			if(p1.getAbs != p2.getAbs)
			{
				if(p1.getOrd != p2.getOrd)
					return true;
					
			}else return false;
		}
		
		double longueur()
		{
			if(this->estVerticale())
			{
				if(p1.getOrd > p2.getOrd)
					return p1.getOrd - p2.getOrd;
					else   p2.getOrd - p1.getOrd;
			}
			else if(this->estHorizontal())
			{
				if(p1.getAbs > p2.getAbs)
					return p1.getAbs - p2.getAbs;
					else   p2.getAbs - p1.getAbs;
			}
		}
};

int main()
{

	return 1;
}
	
