//Yo yo yo, add the necessary includes future me !

template <class T>
class Pair;

template <class T>
ostream & operator <<(ostream& out, Pair<T> &);

template <class T>
class Pair
{
	private:
		T x1;
		T x2;
	public:
		Pair(T x_1, T x_2){x1 = x_1; x2 = x_2;}
		
		T GetMax();
		
		friend void Dispx1(Pair<CString>);
		friend ostream &operator << <>(ostream&, Pair<T> &);
		friend ostream &operator << (ostream&, Pair<CString> &);
};

template <class T>
T Pair<T>::GetMax()
{
	return x1 > x2 ? x1 : x2;
}

int Pair<int>::GetMax()
{
	cout<<"max int ";
	return x1 > x2 ? x1 : x2;
}
