#include <iostream>
#include <cstring>
using namespace std;

class CString
{
	private:
		char* S;
		//static int nbChaine;
		
	public:
		//static void init(); 
		static int StCt;

		//CONSTRUCTOR
		CString()
		{
			S = new char[1];
			S[0] = '\0';
			
			StCt++;
		}
		
		CString(const char* N)
		{
			S = new char[strlen(N) + 1];
			strcpy(S,N);
			
			StCt++;
		}
		
		CString(const char* N, const char C)
		{
			S = new char[strlen(N) + 2];
			cout<< strlen(S)<<endl;
			strcpy(S,N);
			strncat(S,&C, 1);
			cout<< strlen(S)<<endl;
			
			StCt++;
		}
		
		CString(const char C)
		{
			S = new char[2];
			S[0] = C;
			S[1] = '\0';
			
			StCt++;
		}
		
		
		//STRING OP
		const char* getString() const
		{
			return S;
		}
		
		CString plus(const char C)
		{
			CString Str = CString(this->getString(), C);
			return Str;
			
			
		}
		
		/*CString plus(const CString* s)
		  {
			char temp[20];
			strcpy(temp, S);
			strcat(temp,s.S);
			* CString tempS(temp);
			* return tempS;
		  }*/
		
		//ALPH ORDER
		bool plusGrandQue(CString s2) const
		{
			int Taille;
			if(strlen(this->S) < strlen(s2.S))
				 Taille = strlen(s2.S);
				else Taille = strlen(this->S);
				
			for(int i = 0; i < Taille; i++)
			{
				if(this->S[i] != s2.S[i])
				{	
					if(this->S[i] > s2.S[i])
						return true;
						else return false;
				}
					
			}
			return false;
		}
		
		bool infOuEgale(CString s2) const
		{
			int Taille;
			if(strlen(this->S) < strlen(s2.S))
				 Taille = strlen(s2.S);
				else Taille = strlen(this->S);
				
			for(int i = 0; i < Taille; i++)
			{
				if(this->S[i] > s2.S[i])
					return false;
			}
			return true;
		}
		
		CString plusGrand(CString s2) const
		{
			if(this->plusGrandQue(s2))
				return *this;
				else return s2;
		}
		
		//OR: if( strcmp(S,s2.S)>0 ) return 1; else return 0;
		
		
		~CString()
		{
			//delete []S;
		}
		
		/*static int nbChaine()
		{
			return CString::nbChaine;
		}*/
};

int CString::StCt = 0;

int main()
{
	 CString s1( "tototalitarisme" );	 cout << s1.getString(); cout << endl;
	 CString s2( 'q' ); 	 cout << s2.getString(); cout << endl;
	 CString s3;			 cout << s3.getString(); cout << endl;

	 cout << "nbrChaines" << CString::StCt << endl ;
	 //afficher le nombre de chaines créées
	 
	 s3 = s1.plus('w') ;
	 cout << "s3=" << s3.getString() << endl ;
	 
	 if( s1.plusGrandQue(s2) ) // si s1 > s2 au sens alphabétique
		cout << "plus grand" << endl ;
		
	 if( s1.infOuEgale(s2) ) // si s1 <= s2 au sens alphabétique
		cout << "plus petit" << endl ;
		
	 s3 = s1.plusGrand( s2 ) ;// retourner s1 si s1>s2, s2 sinon
	 cout << s3.getString() << endl ;
} 
