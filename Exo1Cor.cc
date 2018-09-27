#include <iostream>
#include <cstring>
using namespace std;

void exo_1_a()
{
	int tab[10] = {2,8,9,4,16};
	//init les premiers éléments du tableau
	//le reste est à 0
	
	int i;
	int* p = tab;
	cout <<"\ntab:";
	for(i = 0; i < 10; i++)
	{
		cout << p[i] <<" ";
	}
	
	/* OU ALORS !
	 * cout << endl:
	 * for(; p < tab + 10; p++)
	 * {
	 * 		cout << *p <<" "
	 * }
	 * cout << endl;
	 * 
	 */
}

void exo_1_b()
{
	char *tab[3];
	int i;
	
	tab[0] = new char[strlen("truc")+1];
	strcpy(tab[0], "truc");
	
	tab[1] = new char[strlen("machin")+1];
	strcpy(tab[1], "machin");
	
	tab[2] = new char[strlen("chose")+1];
	strcpy(tab[2], "chose");
	
	delete []tab[0];
	delete []tab[1];
	delete []tab[2];
}

int main(){

	exo_1_a();
}

