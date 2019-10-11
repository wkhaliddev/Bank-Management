
# include "Node_1.h"

Node_1::Node_1()
{
	next = nullptr;
	accountNumber = 0;
	password = 0;
}
Node_1::Node_1(int a, int p)
{
	next = nullptr;
	accountNumber = a;
	password = p;
}