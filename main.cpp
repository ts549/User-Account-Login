#include <iostream>
#include <vector>
#include "main.h"

using namespace std;

bool done = false;
vector<User> users;

/**
 * main function that generates saved users.
 * Frees object memory when terminated.
 */
int main() {
	printOptions();
	int action;
	cin >> action;
	performAction(action);

	if (!done) main();

	User* deletePtr;
	for (User user : users) {
		deletePtr = &user;
		delete(deletePtr);
		deletePtr = NULL;
	}

	return 0;
}

/**
 * Prints the options that user can choose from.
 */
void printOptions() {
	cout << "Choose an option:" << endl
			<< "1) Register" << endl
			<< "2) Login" << endl
			<< "3) Change password" << endl
			<< "4) Delete account" << endl
			<< "5) Done" << endl;
}

/**
 * Calls functions to perform based on previous input.
 */
void performAction(int action) {
	switch(action) {
		case(1):
			registerUser();
			break;
		case(2):
			login();
			break;
		case(3):
			changePassword();
			break;
		case(4):
			deleteUser();
			break;
		case(5):
			done = true;
			break;
	}
}
