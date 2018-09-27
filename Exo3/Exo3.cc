#include <iostream>
using namespace std;

void tableauEcriture(int T[])
{
	for(int i = 0; i < 10; i++)
	{
		T[i] = i;
		cout<< T[i] << " ";
	}
	
	cout << endl;
}

void tableauLecture(const int T[])
{
	for(int i = 0; i < 10; i++)
	{
		cout<< T[i] << " ";
	}
	
	cout << endl;
}

void App1()
{
	int T[10];
	tableauEcriture(T);
}

void App2()
{
	int T[10] = {10,9,8,7,6,5,5,5,3,2};
	tableauLecture(T);
}

int main()
{
	App1();
	App2();
	return 1;
}
