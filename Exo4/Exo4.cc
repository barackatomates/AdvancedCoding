#include <iostream>
using namespace std;

class Point
{
	private:
		int x; int y;
	
	public:
		Point()
		{
			x = 9; y = 25;
		}
		
		Point(int Xc, int Yc)
		{
			x = Xc; y = Yc;
		}
		
		Point(const Point &P)
		{
			x = P.getX(); y = P.getY();
		}
		
		int getX();
		int getY();
};

int Point::getX() {return x;}
int Point::getY() {return y;}

int main()
{
	return 1;
}
