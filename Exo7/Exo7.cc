#include <iostream>
#include <cstring>
using namespace std;

class CString
{
	private:
		char* S;
		
	public:
		
		//BUILDER
		CString()
		{
			S = new char[1];
			S[0] = '\0';
			
		}
		
		CString(const char* N)
		{
			S = new char[strlen(N) + 1];
			strcpy(S,N);
		}
		
		CString(const char* N, const char C)
		{
			S = new char[strlen(N) + 2];
			cout<< strlen(S)<<endl;
			strcpy(S,N);
			strncat(S,&C, 1);
			cout<< strlen(S)<<endl;
		}
		
		CString(const char C)
		{
			S = new char[2];
			S[0] = C;
			S[1] = '\0';
		}
		
		//STRING OP
		char* getString()const
		{
			return S;
		}
		
		CString plus(const char C)
		{
			CString Str = CString(this->getString(), C);

			return Str;
		}
		
		//ALPH ORDER
		bool plusGrandQue(CString s2)
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
		
		bool infOuEgale(CString s2)
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
		
		CString plusGrand(CString s2)
		{
			if(this->plusGrandQue(s2))
				return *this;
				else return s2;
		}
};

//DEFINITION
class Definition
{
	private:
		CString Name;
		CString Def;
	public:
		Definition(const char* N, const char* D)
		{
			Name = CString(N);
			Def = CString(D);
		}
		
		const char* getClef() const
		{
			return Name.getString();
		}
		
		const char* getDef() const
		{
			return Def.getString();
		}
};

int main()
{
	Definition homer( "Homer", "Buveur de biere" ) ;
	cout<<"la definition du mot "<< homer.getClef()<<" est "<<
	homer.getDef() << endl ; 
} 
