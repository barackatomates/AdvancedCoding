#ifndef _TD2VECTOR_H
#define _TD2VECTOR_H
#include <iostream>
using namespace std;

//la mettre en com pour les list (✠ das ist unt macro ✠)
#define TAB_DYNAMIQUE
#ifdef TAB_DYNAMIQUE

class Vector{
	
	private:
		
		int* vect;
		int dim;												//Taille du vector
		
	public:
		Vector(int d=1);
		Vector(const Vector &v);
		
		~Vector();
		
		Vector &operator=(const Vector &);
		int &operator [](int i);								//retourne le ième élément
		Vector &operator+=(const int);							//ajouter un entier
		friend ostream &operator <<(ostream &o, Vector &v);		//operateur de l'affichage (cout) permet cout << vector
		friend istream &operator >>(istream &is, Vector &v); 	//operateur de la saisi	(cin)
};
#else


class Node
{
	friend class Vector; //Sera une classe amie de vector pour facilement piller ses villages et violer ses femmes (ou l'inverse on juge pas ici)
	
	private:
		int integer;
		Node *nextNode;
	public:
		Node(int = 0);
		~Node();
		int GetInt(){return integer;}
		Node* GetNextNode(){return nextNode;}
		//On peut définir une partie des méthode dans le .h
};

class Vector
{
	public:
		Node *head;
		int lenght;
		
	public: //encore un
		Vector(int=0);
		Vector(const Vector &v);
		
		~Vector();
		
		Vector &operator=(const Vector &);
		int &operator [](int i);								//retourne le ième élément
		Vector &operator+=(const int);							//ajouter un entier
		friend ostream &operator <<(ostream &o, Vector &v);		//operateur de l'affichage (cout) permet cout << vector
		friend istream &operator >>(istream &is, Vector &v); 	//operateur de la saisi	(cin)
};

#endif
#endif
