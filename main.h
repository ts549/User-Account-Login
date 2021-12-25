#ifndef MAIN_H_
#define MAIN_H_
#endif /* MAIN_H_ */

#include <vector>

/**
 * Header file for User class and function delcarations.
 */

class User {

private:
	std::string username;
	std::string password;
	std::string getPassword();

public:
	User(std::string username, std::string password);
	virtual ~User();
	std::string getUsername();
	bool checkPassword(std::string password);
	void setPassword(std::string password);
};

extern std::vector<User> users;

void printOptions();

void performAction(int action);

void registerUser();

void login();

void changePassword();

void deleteUser();
