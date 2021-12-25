#include <iostream>
#include "main.h"
#include <vector>

using namespace std;

int main();

/**
 * Function that checks login credentials.
 * If valid username and password, send "success" message and return to menu.
 */

void login() {
	cout << "Enter username: ";
	string username;
	cin >> username;

	User* user;
	bool found = false;
	for (User compare : users) {
		if (compare.getUsername() == username) {
			user = &compare;
			found = true;
		}
	}

	if (!found) {
		cout << "Username not found." << endl;
		main();
		return;
	}

	cout << "Enter password: ";
	string password;
	cin >> password;

	if (!(user->checkPassword(password))) {
		cout << "Wrong password." << endl;
		main();
		return;
	}

	cout << "Login successful!" << endl;
	main();
	return;
}
