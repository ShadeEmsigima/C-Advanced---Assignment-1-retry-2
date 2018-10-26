#include "stdafx.h"
#include "Teacher.h"


Teacher::Teacher(std::string givenName)
{
	name = givenName;
	assignedTo = "not assigned";
}


Teacher::~Teacher()
{
}

void Teacher::assignTo(Module* chosenModule) {// assign it to a module
	std::cout << "Assigned to "<<chosenModule->name; //DEBUG print out the name of the chosenModule
}
