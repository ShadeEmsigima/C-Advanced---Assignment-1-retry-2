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
	std::cout << "PREPERATIONS ====================================================" << std::endl;
	//make 3 modules on the heap
	Module* Python = new Module("Python");
	std::cout << "Heap saved module " << Python->name << std::endl;
	Module* HTML = new Module("HTML");
	std::cout << "Heap saved module " << HTML->name << std::endl;
	Module* CPP = new Module("C++");
	std::cout << "Heap saved module " << CPP->name << std::endl;

	std::cout << std::endl;

	//make 3 teachers on the heap
	Teacher* Valentijn = new Teacher("Valentijn"); Valentijn->assignTo(Python); //make teacher, assign teacher
	std::cout << "Heap saved teacher " << Valentijn->name << std::endl << "Assigned to: " << Valentijn->assignedTo << std::endl;
	Teacher* Ton = new Teacher("Ton"); Ton->assignTo(HTML);
	std::cout << "Heap saved teacher " << Ton->name << std::endl << "Assigned to: " << Ton->assignedTo << std::endl;
	Teacher* Edwin = new Teacher("Edwin"); Edwin->assignTo(CPP);
	std::cout << "Heap saved teacher " << Edwin->name << std::endl << "Assigned to: " << Edwin->assignedTo << std::endl;
	

	std::cout << std::endl;

	//make 10 students on the heap
	//I tried a for loop to make new students, but failed
	Student* s1 = new Student("Pietje 1"); s1->assignTo(Python);
	std::cout << "Heap saved student " << s1->name <<std::endl << "Assigned to: " << s1->assignedTo << std::endl;
	
	Student* s2 = new Student("Pietje 2"); s2->assignTo(CPP);
	std::cout << "Heap saved student " << s2->name << std::endl << "Assigned to: " << s2->assignedTo << std::endl;
	
	Student* s3 = new Student("Pietje 3"); s3->assignTo(Python);
	std::cout << "Heap saved student " << s3->name << std::endl << "Assigned to: " << s3->assignedTo << std::endl;
	
	Student* s4 = new Student("Pietje 4"); s4->assignTo(HTML);
	std::cout << "Heap saved student " << s4->name << std::endl << "Assigned to: " << s4->assignedTo << std::endl;
	
	Student* s5 = new Student("Pietje 5"); s5->assignTo(CPP);
	std::cout << "Heap saved student " << s5->name << std::endl << "Assigned to: " << s5->assignedTo << std::endl;
	
	Student* s6 = new Student("Pietje 6"); s6->assignTo(Python);
	std::cout << "Heap saved student " << s6->name << std::endl << "Assigned to: " << s6->assignedTo << std::endl;
	
	Student* s7 = new Student("Pietje 7"); s7->assignTo(CPP);
	std::cout << "Heap saved student " << s7->name << std::endl << "Assigned to: " << s7->assignedTo << std::endl;
	
	Student* s8 = new Student("Pietje 8"); s8->assignTo(HTML);
	std::cout << "Heap saved student " << s8->name << std::endl << "Assigned to: " << s8->assignedTo << std::endl;
	
	Student* s9 = new Student("Pietje 9"); s9->assignTo(HTML);
	std::cout << "Heap saved student " << s9->name << std::endl << "Assigned to: " << s9->assignedTo << std::endl;
	
	Student* s10 = new Student("Pietje 10"); s10->assignTo(Python); //make student, assign student
	std::cout << "Heap saved student " << s10->name << std::endl << "Assigned to: "<< s10->assignedTo << std::endl;

	std::cout << std::endl;

	std::cout << "ASSIGNMENT ====================================================" << std::endl;
	
	std::cout <<CPP->EC;

	std::cout << std::endl;
	system("PAUSE");
}

