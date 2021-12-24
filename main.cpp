#include <iostream>
#include <vector>
#include "main.h"

using namespace std;

bool done = false;
vector<User> users;

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

void printOptions() {
	cout << "Choose an option:" << endl
			<< "1) Register" << endl
			<< "2) Login" << endl
			<< "3) Change password" << endl
			<< "4) Delete account" << endl
			<< "5) Done" << endl;
}

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
			break;
		case(5):
			done = true;
			break;
	}
}
