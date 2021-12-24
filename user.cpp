#include <iostream>
#include "main.h"

using namespace std;

User::User(string username, string password) {
	this->username = username;
	this->password = password;
}

User::~User() {
}

string User::getUsername() {
	return this->username;
}

string User::getPassword() {
	return this->password;
}

bool User::checkPassword(string password) {
	return (password == this->getPassword());
}

void User::setPassword(string password) {
	this->password = password;
}
