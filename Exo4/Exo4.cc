#include <iostream>
using namespace std;

class Point
{
	private:
		int x; int y;
	
	public:
	
		int getX()const{return x;}
		int getY()const{return y;}
		void Affichage();
		void clone();
		
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
			this->x = P.getX(); this->y = P.getY();
		}
		
};

int main()
{
	return 1;
}
