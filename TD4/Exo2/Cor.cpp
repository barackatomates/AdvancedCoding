#include <iostream>
using namespace std;
#include <stdlib.h>
#include <math.h>
#include "../CString.cpp"
#include "../vector.h"

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

//need template ? No sauf pour certain compilo dans quel cas on fait:
template <>
int Pair<int>::GetMax()
{
	cout<<"max int ";
	return x1 > x2 ? x1 : x2;
}

template <>
float Pair<float>::GetMax()
{
	cout<<"max float :";
	return x1 > x2 ? x1 : x2;
}

template <class T>
void DispMax(Pair<T> &p)
{
	cout << p.GetMax();
}

void DispMax(Pair<CString> &p)
{
	cout<<p.GetMax().getString();
}

void Dispx1(Pair<CString> p)
{
	cout << p.x1.getString();
}

template <class T>
ostream &operator<<(ostream& out, Pair<T> &p)
{
	out<<p.x1<<", "<<p.x2;
	return out;
}

ostream & operator <<(ostream& out, Pair<CString> &p)
{
	cout<<"spec :";
	out<<p.x1.getString()<<", "<<p.x2.getString();
	return out;
}

int main(){
	
	 int i=5, j=6;
	 float l=10.0, m=5.0;
	 
	 Pair<int> myInts (i,j); //créer une paire d’entiers
	 Pair<float> myFloats (l,m); //créer une paire de flottants
	 
	 cout << myInts.GetMax()<< endl; //affiche le plus grand des 2 entiers
	 cout << myFloats.GetMax()<<endl;//affiche le plus grand des 2 flottants
	
	 
	 return 0 ; 
}
