#pragma once
#include <string>

class Student
{
private:
public:
	std::string name;
	std::string assignedTo;
	int EC;

	Student(std::string givenName);
	~Student();

	void showEC();
	void assignTo(std::string chosenModule);
};

