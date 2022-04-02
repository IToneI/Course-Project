#include "windows.h"
#include <string>
#include "User.h"
#include "Admin.h"
#include <iostream>
#include "Course Project.h"

using namespace std;
void clear();
int main()
{   
	int t = 0;
	cout << "\t Authorithation" << endl;
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
		
		Admin.login();
		Sleep(2000);
		clear();
		break;
	}
	case 2:
	{
		LoginManager User;
		User.login();
		Sleep(2000);
		clear();

		break;
		
	}
	
	


	default:
		break;
	}
   
}
void clear() {
	// CSI[2J clears screen, CSI[H moves the cursor to top-left corner
	std::cout << "\x1B[2J\x1B[H";
}