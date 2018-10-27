/* - Print a list of modules, with students and teachers
- show total EC per student
- change EC of 1 module: print the list again
*/

//IM tryign to put things on vector list so that:
//modules can be assigned my random
//can keep track of who is assigned to what

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
#include "Student.h"
#include "Teacher.h"
#include "Module.h"


int main()
{
	std::cout << "PREPERATIONS ====================================================" << std::endl;
	
	//make 3 modules on the heap, and add them to a vector
	std::vector<Module*> modules;
	Module* Python = new Module("Python"); modules.push_back(Python);
	Module* HTML = new Module("HTML"); modules.push_back(HTML);
	Module* CPP = new Module("C++"); modules.push_back(CPP);
	//Print the modules that were saved
	std::cout << "Heap saved modules: ";
	for (int i = 0; i < 3; i++) {
		std::cout << modules.at(i)->name << " ";
	}

	std::cout << std::endl;
	std::cout << std::endl;

	//make 3 teachers on the heap, and assign them. Print this.
	Teacher* Valentijn = new Teacher("Valentijn"); Valentijn->assignTo(Python);
	std::cout << "Heap saved teacher " << Valentijn->name << std::endl << "Assigned to: " << Valentijn->assignedTo << std::endl;
	Teacher* Ton = new Teacher("Ton"); Ton->assignTo(HTML);
	std::cout << "Heap saved teacher " << Ton->name << std::endl << "Assigned to: " << Ton->assignedTo << std::endl;
	Teacher* Edwin = new Teacher("Edwin"); Edwin->assignTo(CPP);
	std::cout << "Heap saved teacher " << Edwin->name << std::endl << "Assigned to: " << Edwin->assignedTo << std::endl;
	

	std::cout << std::endl;

	//making students on heap using vectors with pointers to students. Inspired by teacher's example code
	std::vector<Student*> studenten;

	//ONE WAY OF GETTING RANDOM NUM:
	//for (int i = 0; i < 10; i++) {
	//	//picking random pos on vector of modules to assign student to a random module
	//	//https://stackoverflow.com/questions/5008804/generating-random-integer-from-a-range
	//	int min = 0;
	//	int max = 2;
	//	int output = min + (rand() % static_cast<int>( max - min + 1));
	//	return output as at(HERE)
	//}

	//NEXT TIME
	//get this random stuff to work and assign student a random module in the vector loop
	//srand(time(NULL)*2);
	//for (int i = 0; i < 2; i++) {
	//	thePassword += charList[rand() % 52];
	//}

	Student* nieuweStudent = new Student("Pietje Puk"); //save on heap with name
	nieuweStudent->assignTo(modules.at()); //now assign it
	std::cout << "Heap saved " << nieuweStudent->name << ", assigned to module " << nieuweStudent->assignedTo << std::endl;
	
	std::cout << std::endl;

	std::cout << "ASSIGNMENT ====================================================" << std::endl;
	
	//-Print a list of modules, with students and teachers


	std::cout << std::endl;
	system("PAUSE");
}

	////make 10 students on the heap
	////I tried a for loop to make new students, but failed
	//Student* s1 = new Student("Pietje 1"); s1->assignTo(Python);
	//std::cout << "Heap saved student " << s1->name <<std::endl << "Assigned to: " << s1->assignedTo << std::endl;
	//
	//Student* s2 = new Student("Pietje 2"); s2->assignTo(CPP);
	//std::cout << "Heap saved student " << s2->name << std::endl << "Assigned to: " << s2->assignedTo << std::endl;
	//
	//Student* s3 = new Student("Pietje 3"); s3->assignTo(Python);
	//std::cout << "Heap saved student " << s3->name << std::endl << "Assigned to: " << s3->assignedTo << std::endl;
	//
	//Student* s4 = new Student("Pietje 4"); s4->assignTo(HTML);
	//std::cout << "Heap saved student " << s4->name << std::endl << "Assigned to: " << s4->assignedTo << std::endl;
	//
	//Student* s5 = new Student("Pietje 5"); s5->assignTo(CPP);
	//std::cout << "Heap saved student " << s5->name << std::endl << "Assigned to: " << s5->assignedTo << std::endl;
	//
	//Student* s6 = new Student("Pietje 6"); s6->assignTo(Python);
	//std::cout << "Heap saved student " << s6->name << std::endl << "Assigned to: " << s6->assignedTo << std::endl;
	//
	//Student* s7 = new Student("Pietje 7"); s7->assignTo(CPP);
	//std::cout << "Heap saved student " << s7->name << std::endl << "Assigned to: " << s7->assignedTo << std::endl;
	//
	//Student* s8 = new Student("Pietje 8"); s8->assignTo(HTML);
	//std::cout << "Heap saved student " << s8->name << std::endl << "Assigned to: " << s8->assignedTo << std::endl;
	//
	//Student* s9 = new Student("Pietje 9"); s9->assignTo(HTML);
	//std::cout << "Heap saved student " << s9->name << std::endl << "Assigned to: " << s9->assignedTo << std::endl;
	//
	//Student* s10 = new Student("Pietje 10"); s10->assignTo(Python); //make student, assign student
	//std::cout << "Heap saved student " << s10->name << std::endl << "Assigned to: "<< s10->assignedTo << std::endl;
