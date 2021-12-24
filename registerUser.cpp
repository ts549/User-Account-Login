#include <iostream>
#include "main.h"

using namespace std;

void registerUser() {
	cout << "Enter a username:" << endl;
	string username;
	cin >> username;

	for (int i = 0; i < users.size(); i++) {
		User user = users.at(i);
		if (user.getUsername() == username) {
			cout << "Username is taken.";
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

	User newUser;
	newUser = new User(username, password);

	users.push_back(newUser);
}
