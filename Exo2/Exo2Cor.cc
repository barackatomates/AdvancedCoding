#include <iostream>
using namespace std;

void App1(int &M, int &K)
{
	int temp = M;
	M = K;
	K = temp;
}

void echange()
{
	int M = -31;
	int K = 9;
	
	cout<< "M = " << M  << " K = " << K << endl;
	
	App1(M, K);
	
	cout<< "M = " << M  << " K = " << K << endl;
}

int main(){
	
	echange();
	return 1;
}

