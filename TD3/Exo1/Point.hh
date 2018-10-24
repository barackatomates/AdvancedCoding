class Point
{
	private:
		double abs;
		double ord;
	
	public:	
	
	//-------------Constructors-------------
		Point();
		Point(double abs, double ord);
		Point(const Point&P);
		
	//-------------Getters-------------	
		double getAbs() const;
		double getOrd() const;
	
	//-------------Setters-------------
		void setAbs(double a);
		void setOrd(double o);
			
	//-------------Traitement-------------
		void Deplacer(const int x, const int y);
		void Afficher();
		virtual void Cloner(const Point &P);
	
		~Point();
};

