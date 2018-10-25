#include <iostream>
using namespace std;

template <class T>
T GetMax(T x, T y)
{
	return x > y ? x : y;
}

int main()
{
	int i=5, j=6, k;
	float l=10.0, m=5.0, n;
	k = GetMax(i, j);
	n = GetMax(l, m); 
	
	cout << k << endl;
	cout << n << endl;
	return 0 ; 
}
