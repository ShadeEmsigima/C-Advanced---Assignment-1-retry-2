#pragma once
#include <iostream>
#include <string>
#include "Module.h" //use this if in assignTo() type us module, not string. [WORKS]

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
	void assignTo(Module* chosenModule);
};

