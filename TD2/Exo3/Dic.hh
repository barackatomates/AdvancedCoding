#include "../../Exo6/Exo6.cc"

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
		~Node();
		Definition *GetDef(){return def;}
		Node* GetNextNode(){return nextNode;}
};

#endif
