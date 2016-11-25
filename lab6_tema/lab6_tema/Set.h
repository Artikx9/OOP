#pragma once
#pragma warning (disable:4018)
#pragma warning (disable:4715)
#include <iostream>
#include "time.h"



class Set
{
private:
	int *mass;
	int size;
	int index;
public:
	Set(int, int);

	void addElement(int);
	void delElement(int);
	int getElement(int);
	int getSize();
	int getIndex();
	int getElementPosition(int);
	bool checkForElement(int);

	void showMass();

	void operator-(int);
	void operator*(Set);
	void operator<(Set&);
	void operator!=(Set&);
	void operator+(int);

	~Set();
};

