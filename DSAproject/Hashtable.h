#pragma once
# include "Node.h"
# include "Node_1.h"

class Hashtable
{
public:
	Node * start;
	Hashtable();
	void starthash();
	void loadhashtable();
	void add(int,int);
	bool match(int,int);
	void display();
	void displayPasswords();
	void delete_password(int);
};