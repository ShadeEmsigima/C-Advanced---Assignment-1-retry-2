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
	assignedTo = chosenModule->name; //set the assigned module to the name of the Module obj the pointer points at
	//std::cout << "Assigned to " << chosenModule->name; // DEBUG print out the name of the chosenModule

	//update the EC points:
	studentEC = chosenModule->EC;
}
