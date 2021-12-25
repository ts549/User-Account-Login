#include <iostream>
#include <vector>
#include "main.h"

using namespace std;

int main();

/**
 * Function that takes in a username and checks to see if it is valid.
 * Deletes user from saved users if valid username and password.
 */

void deleteUser() {
	cout << "Enter a username: ";
	string username;
	cin >> username;

	User* user;
	bool found = false;

	int i = 0;
	for (User cmp : users) {
		if (cmp.getUsername() == username) {
			user = &cmp;
			found = true;
			break;
		}
		i++;
	}

	if (!found) {
		cout << "Username not found." << endl;
		main();
		return;
	}

	cout << "Enter password: ";
	string password;
	cin >> password;

	if (!user->checkPassword(password)) {
		cout << "Incorrect password." << endl;
		main();
		return;
	}

	users.erase(users.begin() + i);
	delete(user);
	user = NULL;
	cout << "Successfully deleted account." << endl;
}
