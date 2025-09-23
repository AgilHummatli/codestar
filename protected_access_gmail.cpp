/*
 * File: protected_access_gmail.cpp
 * Problem:
 * Access protected members of a base class using inheritance.
 */

#include <iostream>
using namespace std;

// base class
class Account {
protected:
    string account_id;
    string password;

public:
    void display_info() {
        cout << account_id << endl;
        cout << password << endl;
    }
};

// derived Gmail class
class Gmail : public Account {
public:
    string domain = "@gmail.com";

    // constructor to initialize account_id and password
    Gmail(string username, string pw) {
        account_id = username + domain;
        password = pw;
    }
};

int main() {
    // create Gmail object
    Gmail gmail1("slimshady", "8Mile#2002");

    // display account info
    gmail1.display_info();

    return 0;
}
