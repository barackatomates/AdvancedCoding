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

CString Definition::GetDef() const
{
	return definition;
}

Definition::~Definition()
{
	cout <<" dest "<< clef.getString()<<"-";
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

void Dico::AddDef(Definition* newDef)
{
	if(!newDef)
		return;
		
	Node* newNode = new Node(newDef);
	CString entry = newDef->GetClef();
	Node * curNode=head;
	Node * temp;
	while(temp=curNode->nextNode)
	{
		CString curClef = temp->def->GetClef();
		if(entry <= curClef)
			break;
		curNode=curNode->nextNode;
	}
	
	newNode->nextNode=temp;
	curNode->nextNode=newNode;
	length++;
}

CString Dico::GetDef(CString &entry)
{
	Node* curNode = head ->nextNode;
	CString def = "";
	while(curNode)
	{
		if(!strcmp(entry.getString(),(curNode->def->GetClef()).getString()))
		{
			def = curNode->def->GetDef();
			break;
		}
		curNode=curNode->nextNode;
	}
	return def;
}

void Dico::Display()
{
	Node* curNode=head->nextNode;
	while(curNode)
	{
		cout << curNode->def->GetClef().getString()<<" = "<<curNode->def->GetDef().getString()<<endl;
		curNode=curNode->nextNode;
	}
}

Definition* Dico::GetRandDef()
{
	if(!length)
		return NULL;
	int rnd = (rand()%length);
	
	Node *curNode=head->nextNode;
	for(int i=0; i< rnd; i++)
	{
		curNode=curNode->nextNode;
	}
	
	return curNode->def;
}

ostream & operator << (ostream &out, Dico &dico)
{
	dico.Display();
	return out;
}

int main()
{
	Dico dico = Dico();
	
	dico.AddDef(new Definition("Albert", "Camu"));
	dico.AddDef(new Definition("cpp", "Cours Petite P***"));
	dico.AddDef(new Definition("Naivasamjananasamjana", "The World Above Earthly Desires"));
	dico.AddDef(new Definition("Patate", "Baffe"));
	dico.AddDef(new Definition("Forain", "Homme de respect"));

	cout<<dico<<endl;
	CString s=CString("cpp");
	
	cout<<dico.GetDef(s).getString()<<endl;
	
	Dico *tmpDico = new Dico(false);
	
	srand((unsigned)time(0));
	tmpDico->AddDef(dico.GetRandDef());
	tmpDico->AddDef(dico.GetRandDef());
	tmpDico->AddDef(dico.GetRandDef());
	cout<<*tmpDico;
	delete tmpDico;
	
	return 0;
}
