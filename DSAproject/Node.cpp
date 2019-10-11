
# include"Node.h"

Node::Node()
{
	next = nullptr;
	pre = nullptr;
	data = 0;
}
Node::Node(int d)
{
	next = nullptr;
	pre = nullptr;
	data = d;
}