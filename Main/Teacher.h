#pragma once
#include <string>
class Teacher
{
private:
public:
	std::string name;
	std::string assignedTo;

	Teacher(std::string givenName);
	~Teacher();

	void assignTo(std::string chosenModule);
};

