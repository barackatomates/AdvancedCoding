#include <iostream>
#include <cstring>
#include <list>
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
		
		//FUCK YOUR MEMORY YOU CHEEKY DICKWAFFLE
		CString(const CString& otha)
		{
			S = new char[strlen(otha.S)];
			memcpy(this->S, otha.S, 20);
		}
		
		//DOCTORS ARE OVERATED ANYWAYS
		CString& operator= (const CString& otha)
		{
			if(this != &otha)
				memcpy(S, otha.S, 20); //IMMA PUT 20 HERE CAUSE I'M LAZY AND I HAVE A HEADACH MY CAPS ARE ON AND don't you think headach is a really weird word ? I mean, what the hell duderinos (and rastasistafarinas !) look at the ducking word ! It's horsing annoying, why in the name of the Holy Moly Spaghetti Rapper (and not Rapist, that's comming later [or was it cu... no it wasn't...?] does "ach" is pronounced "ach" ? I just don't get it. Anyways I need to throw out the trash (and by trash I mean the jews [and by jews I in fact mean defectuous pills against headaches, wait... IS THIS HOW YOUR SUPPOSED TO WRITE THAT ? IS IT REALLY THE PLURAL FORM OF HEADACH ? AND WHAT THE BULL ? EVEN THOUGH MY CAPS LOCK IS ACTIVE WHENEVER I PRESS THE QUESTION MARK KEY A ',' APPEAR INSTEAD OF A '?', WHAT KIND OF SORCERY IS THIS ? Oh AND BY THE WAY, REMEMBER EARLIER WHEN I SAID MY CAPS WERE ON ? WELL... MY LATE FATHER, FORGIVE FOR I HAVE A SIN TO CONFESS. FIRST I NEVER LIKED YOUR ROBE I THINK THEY ARE WAY TOO CONFORTABLE TO BE USED BY HONEST WORKING MEN SO QUIT THE ACT AND START TO ACT LIKE A REAL TODDLYDOODLER YOU DESPICABLE EXCUSE OF A MAN ! HUM... YEAH ! SO, I LIED ABOUT HAVING MY CAPS ON, THEY WERE OFF ! UNTIL I TOGGLED THEM ON WHEN I STARTED WRITING IN CAPITAL LETTERS AGAIN SOOOOOOO THAT'S IT. IT STILL MAKES ONLY ONE SIN THOUGH 'CAUSE YOU KNOW WHAT THEY SAY, ADMIT YOUR FAULT AND I'LL ONLY INSERT ONE HAND !
				
			return *this;
		}
		
		
		//STRING OP
		const char* getString() const
		{
			return S;
		}
		
		/*CString plus(const char C)
		{
			CString* Str = new CString(this->getString(), C);
			return *Str;
		}*/
		
		CString plus(const char s)
		  {
			char DrPepperTM[2] = {s};  
			
			char temp[20];
			strcpy(temp, S);
			strcat(temp,DrPepperTM);
			CString tempS(temp);
			return tempS;
		  }
		
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
			delete []S;
		}
		
		/*static int nbChaine()
		{
			return CString::nbChaine;
		}*/
};

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

class Dictionnaire
{
	private:
		list<Definition> Dic; //haha
	
	public:
		Dictionnaire()
		{

		}
		void addDef(const Definition Def)
		{
			Dic.push_front(Def);
		}
		
		bool Recherche(const Definition Def)
		{
			for(list<Definition>::iterator it = Dic.begin(); it != Dic.end(); it++)
			{
				if((*it).getClef() == Def.getClef())
				{
					cout << "J'ai trouvé chef !";
					Afficher(*it);
					return true;
				}
			}
			cout << "Jamais entendu parlé de ça gamin.";
			return false;
		}
		
		void Afficher(const Definition Def)
		{
			cout<<"la definition du mot "<< Def.getClef()<<" est "<< Def.getDef() << endl ; 	
		}
};

int CString::StCt = 0;

int main()
{
	Definition homer( "Homer", "Buveur de biere" ) ;
	cout<<"la definition du mot "<< homer.getClef()<<" est "<<
	homer.getDef() << endl ; 
} 
