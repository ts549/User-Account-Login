/*
 * main.h
 *
 *  Created on: Dec 23, 2021
 *      Author: taosu
 */

#ifndef MAIN_H_
#define MAIN_H_
#endif /* MAIN_H_ */

#include <vector>

class User {

private:
	std::string username;
	std::string password;
	std::string getPassword();

public:
	User(std::string username, std::string password);
	virtual ~User();
	std::string getUsername();

};

extern std::vector<User> users;

void printOptions();

void performAction(int action);

void registerUser();
