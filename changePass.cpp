#include <iostream>
#include <vector>
#include "main.h"

using namespace std;

int main();

/**
 * Function that changes the password of a user.
 * First checks to see if username and password valid.
 */
void changePassword() {
	cout << "Enter username: ";
	string username;
	cin >> username;

	User* user;
	bool found = false;
	int i = 0;
	for (User cmp : users) {
		if (cmp.getUsername() == username) {
			user = &cmp;
			users.erase(users.begin() + i);
			found = true;
		}
		i++;
	}

	if (!found) {
		cout << "Username is incorrect." << endl;
		main();
		return;
	}

	cout << "Enter old password: ";
	string oldPass;
	cin >> oldPass;

	if (!(user->checkPassword(oldPass))) {
		cout << "Incorrect password" << endl;
		main();
		return;
	}

	bool valid = false;
	string newPass;
	while(!valid) {
		cout << "Enter new password: ";
		cin >> newPass;
		if (newPass.length() >= 8) {
			cout << "Password changed successfully." << endl;
			valid = true;
			continue;
		}
		cout << "Password too short";

	}

	user->setPassword(newPass);
	users.push_back(*user);
}
