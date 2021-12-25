#include <iostream>
#include "main.h"

using namespace std;

/**
 * Registers a user.
 * Creates a username and password if password is at least 8 characters.
 */
void registerUser() {
	cout << "Enter a username:" << endl;
	string username;
	cin >> username;

	for (User user : users) {
		if (user.getUsername() == username) {
			cout << "Username is taken." << endl;
			registerUser();
		}
	}

	cout << "Enter a password:" << endl;
	string password;
	bool valid = false;
	cin >> password;

	while(!valid) {
		if (password.length() < 8) {
			cout << "Password too short!" << endl
					<< "Enter a password:" << endl;
			cin >> password;
			continue;
		}
		valid = true;
	}

	User * newUser;
	newUser = new User(username, password);

	users.push_back(*newUser);
}
