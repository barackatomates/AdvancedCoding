class Point
{
	private:
		double abs;
		double ord;
	
	public:	
		double getAbs() const;
		double getOrd() const;
		
		void setAbs(double a);
		void setOrd(double o);
		
		Point();
		Point(double abs, double ord);
		Point(const Point&P);
		
		~Point();
		
		void Afficher();
		void Cloner(const Point &P);
	
};

