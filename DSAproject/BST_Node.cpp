
# include "BST_Node.h"

BST_Node:: BST_Node()
{
	left = nullptr;
	right = nullptr;
	//Initialize name
	name = "";
	//Initialize address
    adress = "";
	//Initialize account number
    account_number = 0;
	//Initialize password
    password = 0;
	//Initialize balance
    balance = 0;
}
BST_Node:: BST_Node(string name, string adress, int accountnum, int password, int balance)
{
	left = nullptr;
	right = nullptr;
	this->name = name;
	this->account_number = accountnum;
	this->adress = adress;
	this->balance = balance;
	this->password = password;
}
