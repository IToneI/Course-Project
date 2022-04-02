
#include <string>
#include "User.h"
#include "Admin.h"
#include <iostream>

using namespace std;

int main()
{   
	int t = 0;
	cout << "*********************************" << endl;
	cout << "\t1. Admin" << endl;
	cout << "\t2. User" << endl;
	cout << "*********************************" << endl;

	cin >> t;
	switch (t)
	{
	case 1: 
	{
		LoginManager Admin;
		Admin.addUser("Admin", "Admin");
		Admin.login();
		break;
	}
	case 2:
	{
		LoginManager User;
		string log, pasw;
	
		cout << "Create login:";
		cin >> log;
		cout << endl;
		cout << "Create password:";
		cin >> pasw;
		User.addUser(log, pasw);
		User.login();
		break;
		
	}


	default:
		break;
	}
   
}
