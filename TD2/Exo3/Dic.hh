#include "../../TD2/Exo1/Exo1.cc"

#ifndef DIC
#define DIC

#include <ctime>
#include <cstdlib>
#include <iostream>

class Definition
{
	private:
		CString clef;
		CString definition;
	public:
		Definition(char*, char *);
		CString GetClef() const;
		CString GetDef() const;
		~Definition();
};

class Node
{
	friend class Dico;
	
	private:
		Definition *def;
		
		Node *nextNode;
		
	public:
		Node(Definition*);
		Definition *GetDef(){return def;}
		Node* GetNextNode(){return nextNode;}
		~Node();
};

class Dico
{
	private:
		Node *head;
		int length;
		bool isOwner;
		
		void Destroy(Node *); //pour le destructeur
	public:
	
		Dico(bool=true);	//param optionnel par défaut à true
		~Dico();
		void AddDef(Definition*);
		int getLength(){return length;}
		
		CString GetDef(CString &);
		Definition* GetRandDef();
		void Display();
		friend ostream& operator << (ostream &, Dico &);
};

#endif
