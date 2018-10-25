#include "cercle.cpp"
#include "rectangle.cpp"
#include "triangle.cpp"

class Node
{
	friend class List;
	private:
		Node* nextNode;
		Form* item;
	public:
		Node(Form* F);
		Form* getForm(){return item;}
		Node* getNext() {return nextNode;}
		Form* getItem() {return item;}
		~Node();
};

class List
{
	private:
		Node* head;
		void Destroy(Node* N);
		
	public:
		List();
		void Add(Form* F);
		void Display();
		Node* getHead(){return head;}
};
