#include <iostream>
using namespace std;

int main(){
	
	int* T = new int[10];
	
	
	for(int* p = T; p <= T + 9; p++)
	{
		*p = 5;
		printf("%d - ", *p);
	}
	
	printf("\n");
	
	//Verif
	for(int i = 0; i < 10; i++)
	{
		printf("%d - ", T[i]);
	}
	
	printf("\n");
}
