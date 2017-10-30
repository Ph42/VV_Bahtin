const int M_SIZE = 1000;

class List
{
	int size;
	Elem* head, end;
	
	List();
	~List();

};

struct Elem
{
	int data;
	elem* next;
};

List()
{
	size = 0;
	head = NULL;
	end = NULL;
}

~List()
{
	
}