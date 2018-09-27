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
	
	void cloner(const Point P&)
	{
		this->abs = P.getAbs();
		this->ord = P.getOrd();
	}

};
	
