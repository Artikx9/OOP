#pragma once

#include <iostream>
class Printer
{
	char *name;
public:
	Printer();
	Printer(char * Name);
	void settype(char *Name);
	char* gettype();
	friend std::ostream& operator<<(std::ostream&, Printer*);

	friend std::ostream& operator<<(std::ostream&, Printer&);
};