#include <iostream>
#include "../Exo1/Point.cpp"

class Form
{
	public:
		Form();
		virtual ~Form(){cout<<"destruction de form\n";}
		
		virtual void Display()=0;
		virtual void Move(double dx, double dy) = 0;
};

class Rect : public Form
{
	private:
		Point position;
		double width;
		double height;
	public:
		Rect(double abs = 0.0, double ord=0.0, double w=1.0, double h=1.0)
			:Form(), position(abs,ord), width(w), height(h) //ça marche et c'est génial
		{}
		
	virtual ~Rect(){cout<<"Destruction de rectangle\n";}
	
	virtual void Display()
	{
		cout<<"Rectangle, position :"
		Point:position.Afficher();
		cout<<"width: "<< width << "height: " << height<< endl;
	}
	
	virtual void Move(double dx, double dy)
	{
		positon.abs += dx;
		positon.ord += dy;
	}
};

class Triangle : public Form
{
	private:
		Point s[3];
	public:
	
		Triangle(double abs1 =0.0, double ord1=0.0, double abs2=0.0, double ord2=0.0, double abs3=0.0 double ord3=0.0)
			:Form()
		{
			s[0] = Point(abs1, ord1);
			s[1] = Point(abs2, ord2);
			s[2] = Point(abs3, ord3);
		}
		
		virtual ~Triangle(){cout<<"destructeur Triangle\n";}
		
		virtual void Display()
		{
			cout << "Triangle, Sommets: ";
			for(int i=0; i< 3; i++)
				s[i].Afficher();
		}
		
		virtual void Move(double dx, double dy)
		{
			for(int=0; i < 3; i++)
			{
				s[i].Deplacer(dx, dy);
			}
		}
};

int main()
{
	Form* f=new Rect(2.3,-8.7,5.6,9.5);
	f->Display();
	f->Move(7.7,7.9);
	f->Display();
	delete f;
	
	Form* = f=new Triangle(1.0,2.0,3.0,4.0,5.0,6.0)
	f->Display();
	f->Move(7.7,7.9);
	f->Display();
	delete f;
}
