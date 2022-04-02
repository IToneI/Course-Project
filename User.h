#pragma once
#include <iostream>
using namespace std;

class User
{
private: 
    string newName;
    string newPassword;
    string loginName;
    string loginPassword;

public:
    int loginAttempt = 0;
    void EnterDataOfUser() {
        cout << "Please enter new user name: ";
        cin >> newName;
        cout << "Please enter new user password: ";
        cin >> newPassword;
        cout << "Enter login name: ";
        cin >> loginName;
        cout << "Enter password: ";
        cin >> loginPassword;
    }

    void CheckInputOfUser() {
        while(loginAttempt < 5){
            if (loginName == newName && loginPassword == newPassword)
            {
                cout << "Welcome " << loginName;
                break;
            }

            else
            {
                cout << "Invalid login attempt. Please try again.\n" << '\n';
                loginAttempt++;
            }

            if (loginAttempt == 5)
            {
                cout << "Too many login attempts! The program will now terminate.";
                return;
            }

        }
    }

};

