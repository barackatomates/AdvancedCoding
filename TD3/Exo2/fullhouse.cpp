#include "fullhouse.hh"

using namespace std;

Node::Node(Form* F)
{
	item = F;
	nextNode = NULL;
}

List::List()
{
	head = new Node(NULL);
}

void List::Add(Form* F)
{
	if(!F)
		return;
	
	Node* newNode = new Node(F);
	Node* curNode=head;
	Node* temp;
	
	while(curNode->nextNode != NULL)
	{
		curNode = curNode->nextNode;
	}
	
	newNode->nextNode=NULL;
	curNode->nextNode=newNode;
	//cout << <<endl;
	//curNode->item->Afficher();
}

void List::Display()
{
	Node* curNode = head->getNext();
	
	cout<<"zbre\n";
	while(curNode != NULL)
	{
		curNode->item->Afficher();
		curNode = curNode->nextNode;
	}
	
}

int main()
{
	Form* CIDD = new cercle(15,20,9);
	Form* Gle = new Rectangle(10,10,15,10,10,5,15,5);
	Form* Ale = new Triangle(12,12,4,3,9,5);
	
	cout << "boop\n";
	List L = List();
	L.Add(CIDD);
	L.Add(Gle);
	L.Add(Ale);
	
	
	cout<<L.getHead()->getItem()<<endl;
	
	L.Display();
	
	return 900;
}
