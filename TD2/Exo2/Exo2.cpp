#include "Exo2.h"
#include <iostream>
//#include <stdlib>
#include <math.h>
using namespace std;

#ifdef Tab_DYNAMIQUE

Vector::Vector(int d)
{
	if(d<=1)
	{
		cout"dimension <=1 on donne un entier à 0 mais c'est parcequ'on est sympa\n";
		vect = new int[1];
		vect[0] = 0;
		dim = 1;
		return;		//Alors oui on a le droit
	}
	vect = new int[d];
	dim = d;
	for(int i = 0; i < dim; i++)
	{
		vect[i] = 0;
	}
}

Vector::Vector(const Vector &v)
{
	dim = v.dim;
	vect = new int[dim];
	for(int j = 0; j < dim; j++)	vect[i] = v.vect[i];
}

Vector::~Vector()
{
	delete []vect;
	vect = NULL;
}

Vector& Vector::operator=(const Vector &v)
{
	if(this==&v) return *this; //si c'est lui-même
	
	dim=v.dim;
	if(vect)
		delete[] vect;
	vect = new int[dim];
	for(int i=0; i<dim; i++)
		this->vect[i] = v.vect[i];
	return *this;
}

int & Vector::operator [](int i)
{
	if(i<dim && i>=0)
		return vect[i];
	cout << "Overflow, last item returned\n";
	return vect[dim-1];
}

//Essayer de n'utiliser qu'un vect
Vector &Vector::operator +=(const int i)
{
	int *newVect = new int [dim];
	for (int k=0; k<dim; k++)			//copie de vecteur
		newVect[k] = vect[k];
	newVect[d++] = i;					//Ajout le nouvel entier
	if(vect)
		delete[] vect;					//Libère l'original
	vect = newVect;

	return *this;
}

ostream &operator <<(ostream &o, Vector &v)
{
	for(int i=0; i<v.dim; i++)
	{
		o<<v[i]<<" ";
	}
	
	cout<<endl;
	return o;
}

istream &operator >>(istream &is, Vector &v)
{
	int k=0;
	cout<<"entrer "<<v.dim<<" entiers pls: ";
	for(k=0; k<v.dim; k++)
	{
		is>>v[k];
	}
	
	return is;
}

#else

//Part 2 Revenge of the Shindler
Node::Node(int i)
{
	integer=i;
	nextNode = NULL;
}

//Fonctionne Récursivement
Node::~Node()
{
	if(nextNode)
		delete nextNode;
}

Vector::Vector(int nElem)
{
	head=NULL;
	length=0;
	if(nElem<=0)
	{
		cout<<"Dim <= 0 vect est vide\n";
		return;
	}
	
	for(int i = 0; i < nElem; i++)
	{
		(*this)+=0;
	}
}

Vector::Vector(const Vector &v)
{
	if(!v.head)
	{
		head=NULL;
		length=0;
		return;
	}
}

Vector::Vector(const Vector &v)
{
	if(!v.head)
	{
		head=NULL;
		length =0;
		return;
	}
	head = new Node(v.head->integer)//aglaba
	
	Node*thisCurNode=head;
	Node*vCurNode=v.head->nextNode;
	
	while(vCurNode)
	{
		thisCurNode->nextNode=new Node(vCurNode -> integer);
		vCurNode=vCurNode->nextNode;
		thisCurNode=thisCurNode->nextNode;
	}
	
	lentgth = v.length;
}

Vector::~Vector()
{
	delete head;
	head=NULL;
	length=0;
}

Vector &Vector::operator +=(const int integer)
{
	Node *newNode=new Node(integer);
	if(!head)
		head=newNode;
	else
	{
		Node *n=head;
		
		while(n->nextNode)
			n=n->nextNode;
			
		n->nextNode=newNode;
	}
	length++;
	return *this;
}

Vector &Vector::operator =(const Vector &v)
{
	if(this==&v)
		return *this;
	if(head)
		delete head;
	head=NULL;
	length=0;
	Node*n=v.head;
	for(int i=0; i<v.length;i++)
	{
		(*this)+=n->integer;
		n=n->nextNode;
	}
	
	return *this;
}

ostream &operator <<(ostream &o, Vector &v)
{
	Node*curNode=v.head;
	for(int i=0; i<v.length;i++)
	{
		o<<curNode->GetInt()<<" ";
		curNode=curNode->GetNextNode();
	}
	return o;
}

istream &operator >>(istream &is, Vector &v)
{
	int entry=-1;
	cout<<"entrer "<<v.length<<" entier:";
	for(int i=0; i<v.length; i++)
		is>>v[i];
	return is;
}

int & Vector::operator [](int index)
{
	Node*n=head;
	for(int i=0; i<index; i++;)
		n=n->nextNode;
}

int main()
{
	
	return 0;
}
