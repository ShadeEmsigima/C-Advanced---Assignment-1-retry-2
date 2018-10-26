/* - Print a list of modules, with students and teachers
- show total EC per student
- change EC of 1 module: print the list again
*/

#include "stdafx.h"
#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Module.h"


int main()
{
	//make 3 modules on the heap
	Module* Python = new Module("Python");
	std::cout << "Stack saved module " << Python->name << std::endl;
	Module* HTML = new Module("HTML");
	std::cout << "Stack saved module " << HTML->name << std::endl;
	Module* CPP = new Module("C++");
	std::cout << "Stack saved module " << CPP->name << std::endl;

	std::cout << std::endl;

	//make 3 teachers on the heap
	Teacher* Valentijn = new Teacher("Valentijn");
	std::cout << "Stack saved teacher " << Valentijn->name << std::endl;
	Teacher* Ton = new Teacher("Ton");
	std::cout << "Stack saved teacher " << Ton->name << std::endl;
	Teacher* Edwin = new Teacher("Edwin");
	std::cout << "Stack saved teacher " << Edwin->name << std::endl;


	/*
	Student* Python = new Student("Python");
	std::cout << "Stack saved " << Python->name << std::endl;
	Teacher* Python = new Teacher("Python");
	std::cout << "Stack saved " << Python->name << std::endl;
	*/
	//make 10 students on the heap

	std::cout << std::endl;
	system("PAUSE");
}

