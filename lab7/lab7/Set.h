#pragma once
#pragma once
#pragma warning (disable:4018)
#pragma warning (disable:4715)
#include <iostream>
#include "time.h"


template<class Temp>
class Set
{
private:
	Temp *mass;
	int size;
	int index;
public:
	Set(int);

	void addElement(Temp);
	void delElement(int);
	Temp getElement(int);
	int getSize();
	int getIndex();
	int getElementPosition(int);
	bool checkForElement(int);

	void showMass();

	void operator-(int);
	void operator*(Set);
	void operator<(Set&);
	void operator!=(Set&);
	void operator+(Temp);




	~Set();
};


class Printer 
{
	char *name;
public:
	Printer(char * Name);
	void settype(char *Name);
	char* gettype();
	
};