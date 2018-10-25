class Node
{
	friend class CList;
	friend class CPile;
	friend class CFile;
	
	private:
		int integer;
		Node *NextNode;
	public:
		Node(Definition*);
		Definition *GetInt(){return integer;}
		Node* GetNextNode(){return nextNode;}
		~Node();
};

class CList
{
	protected:
		Node* head;
		int length;
		
	public:
		CList()
		{
			head = NULL;
			length = 0;
		}
		
		~CList()
		{
			delete head;
			head = NULL;
			length = 0;
		}
		
		friend ostream&operator <<(ostream&, CList&);
		
		virtual CList& operator<(int)=0;
		
		CList& operator>(int &i)
		{
			if(!head)
			{
				cout<<"pile vide"
				return *this;
			}
			
			i=head->integer;
			Node* tmp = head;
			head = head->nextNode; //super important sinon destruction récursive de toute la list
			tmp->nextNode = NULL;
			delete tmp;
			return *this
		}
};

ostream& operator <<(ostream& out, CList clist)
{
	Node *curNode = clist.head;
	for(int i =0; i <clist.length;i++)
	{
		out << curNode->GetInt()<<" ";
		curNode = curNode->GetNextNode();
	}
	return out;
}

class CPile : public CList
{
	public:
		CPile():CList(){}
		
		virtual CList & operator <(int i)
		{
			Node* newNode ) new Node(i);
			newNode->nextNode=head;
			head=newNode;
			lenght++;
			return *this;
		}
};

class CFile : public CList
{
	public: CFile():CList(){}
	
	virtual CList &operator<(int i)
	{
		Node *newNode = new Node(i);
		if(!head)
			head=newNode;
		else
		{
			Node *n = head;
			while(n->nextNode)
				n=n->nextNode;
			
			n->nextNode = newNode
		}
		
		length++;
		return *this;
	}
};

int main()
{
	int i = 90;
	
	CPile pile = CPile();
	CFile file = CFile();
	
	CList *ptList=&file;
	
	*ptList<0<1<2;
	
	cout << *ptList << endl;
	
	*ptList>i;
	cout<<i;
	ptList=&pile;
	
	*ptList<0<1<2;
	cout<<*ptList<<endl;
	
	*ptList>i;
	cout<<i;
}
