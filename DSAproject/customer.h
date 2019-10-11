#pragma once
# include "BST_Tree.h"
# include "Hashtable.h"
void customer()
{
	BST_Tree t;
	Hashtable h;
	int condition = 0;
	while (condition != 3)
	{
		cout << "welcome CUSTOMER" << endl;
		cout << "choose the following please" << endl;
		cout << "press 1 to see account details" << endl;
		cout << "press 2 to see transaction history  " << endl;
		cout << "press 3 to exit" << endl;
		cin >> condition;
		if (condition == 1)
		{
			int accountno;
			cout << "please enter account number" << endl;
			cin >> accountno;
			BST_Node* temp = t.search(t.Root, accountno);
			cout << "Account Details Are :\t\t\t\t\t\t " << endl << endl;
			cout << "NAME :" << temp->name << endl;
			cout << "ADRESS :" << temp->adress << endl;
			cout << "ACCOUNT NUMBER :" << temp->account_number << endl;
			cout << "PASSWORD :" << temp->password << endl;
			cout << "BALANCE :" << temp->balance << endl;
		}
		if (condition == 2)
		{
			// transaction file print karani ha account search kr k
		}
		if (condition == 3)
		{
			condition = 3;
		}

	}

}