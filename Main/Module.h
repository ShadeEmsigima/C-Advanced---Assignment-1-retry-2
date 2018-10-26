#pragma once
#include <string>
class Module
{
public:
	std::string name;
	std::string assTeach;
	std::string assStud;
	int EC;

	Module();
	~Module();

	void setEC();
	void showList();
};

