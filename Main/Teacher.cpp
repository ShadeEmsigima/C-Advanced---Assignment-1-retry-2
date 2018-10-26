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

void Teacher::assignTo(std::string chosenModule) {// assign it to a module

}
