#include "Dic.hh"
#include <iostream>

using namespace std;

Definition::Definition(char* m, char* def)
{
	clef = CString(m);
	definition = CString(def);
}

CString Definition::GetClef() const
{
	return clef;
}

CString Definition::GetDef const
{
	return definition;
}

Definition::~Definition()
{
	cout <<" dest "<< clef.GetString()<<"-";
}

//NODING OFF

Node::Node(Definition *d)
{
	def = d;
	nextNode = NULL;
}

//missing stuff ?

Dico::Dico(bool own)
{
	head = new Node(NULL);
	length = 0;
	isOwner = own;
}

Dico::~Dico()
{
	Destroy(head);
	cout << endl;
}

//Destr recu de la lst
void Dico::Destroy(Node* n)
{
	if(n)
	{
		if(isOwner && n->def) //suppr les données si y en a
			delete n->def;
		Destroy(n->nextNode);
		delete n;
	}
}

void Dico::AddDef(Definition* newdef)
{
	if(!newDef)
		return;
		
	Node* newNode = new Node(newDef);
	CString entry = newDef->GetClef();
	Node *curNode=head;
	Node * temp;
	while(temp=curNode->nextNode)
	{
		CString curClef = temp−>def->GetClef();
		if(curCle>entry)
			break;
		curNode=curNode->nextNode;
	}
	
	newNode->nextNode=temp;
	curNode->nextNode=newNode;
	length++
}

int main()
{
	return 0;
}
