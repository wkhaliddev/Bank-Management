
# include"Node.h"

Node::Node()
{
	//This is a bidirectional node which requires a pointer to both the next and previous node.
	next = nullptr;
	pre = nullptr;
	data = 0;
}
Node::Node(int d)//Parameterized Constructor
{
	next = nullptr;
	pre = nullptr;
	data = d;
}
