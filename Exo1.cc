#include <iostream>
using namespace std;
#include <cstring>

int main(){
	
	int* T = new int[10];
	
	
	for(int* p = T; p <= T + 9; p++)
	{
		*p = 5;
		printf("%d - ", *p);
	}
	
	printf("\n\n\n");
	
	/*Verif
	for(int i = 0; i < 10; i++)
	{
		printf("%d - ", T[i]);
	}
	
	printf("\n");*/
	
	delete T;
	
	char** C = new char*[3];
	C[0] = new char[strlen("RisingSun")+1];
	strcpy(C[0],"RisingSun");
	
	cout << C[0] << endl;
	
	delete []C;
	
}
