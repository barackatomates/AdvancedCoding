#include <iostream>
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

int main(){

	exo_1_a();
}

