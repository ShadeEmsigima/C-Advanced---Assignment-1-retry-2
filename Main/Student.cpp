#include "stdafx.h"
#include "Student.h"


Student::Student(std::string givenName)
{
	name = givenName;
	assignedTo = "not assigned";
}


Student::~Student()
{
}

void Student::showEC(){ // show EC points of this student
	// get all ECs from assigned modules and return the total amount
}

void Student::assignTo(Module* chosenModule) { //assign it to a module
	std::cout<< chosenModule->name; //print out the name of the chosenModule
}
