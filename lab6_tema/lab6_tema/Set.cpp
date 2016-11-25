#include "stdafx.h"
#include "Set.h"

using namespace std;

Set::Set(int N, int Marker)
{
	if (Marker == 1)
	{
		srand((unsigned)time(NULL));
		size = N;
		index = 0;
		mass = new int[size];
		int number = 0;
		do
		{
			this->addElement(rand() % 10);
		} while (index != size);
	}
	else if (Marker == 0)
	{
		size = N;
		mass = new int[size];
		index = 0;
	}
}

void Set::addElement(int num)
{
	if (index < size)
	{
		int number = 0;
		for (int i(0); i <= index; i++)
		{
			if (num == this->getElement(i))
			{
				number++;
			}
		}
		if (number == 0)
		{
			mass[index] = num;
			index++;
		}
	}
	else {
		cout << "Mass overflow!" << endl;
	}
}
void Set::delElement(int ind)
{
	if (ind < index)
	{
		for (int i(ind); i < index - 1; i++)
		{
			mass[i] = mass[i + 1];
		}
		index--;
	}
	else {
		cout << "No such element index!" << endl;
	}
}
int Set::getElement(int ind)
{
	return mass[ind];
}
int Set::getSize()
{
	return size;
}
int Set::getIndex()
{
	return index;
}
int Set::getElementPosition(int element)
{
	for (int i(0); i < index; i++)
	{
		if (mass[i] == element)
		{
			return i;
		}
	}
}
bool Set::checkForElement(int element)
{
		int check = 0;
		for (int i(0); i < index; i++)
		{
			if (mass[i] == element)
			{
				check++;
			}
		}
		if (check > 0)
		{
			return true;
		}
		else {
			return false;
		}
}

void Set::showMass()
{
	if (index <= size && index > 0)
	{

		for (int i(0); i < index; i++)
		{
			cout << "mass[" << i << "]=" << mass[i] << endl;
		}
	}
	else {
		cout << "Error or empty mass!" << endl;
	}
}

void Set::operator-(int element)
{
	if (this->checkForElement(element))
	{
		for (int i= this->getElementPosition(element); i < index - 1; i++)
		{
			mass[i] = mass[i + 1];
		}
		index--;
	}
	else {
		cout << "No such element!" << endl;
	}
}
void Set::operator*(Set obj)
{
	for (int n(0); n <index; n++)
	{
		for (int m = 0; m <obj.getIndex(); m++)
		{
			if (mass[n] == obj.getElement(m))
			{
				cout << mass[n] << endl;
			}
		}
	}
}
void Set::operator<(Set& object)
{
	int number = 0;
	for (int i(0); i < index; i++)
	{
		for (int j(0); j < object.getIndex(); j++)
		{
			if (mass[i] == object.getElement(j))
			{
				number++;
			}
		}
	}
	if (number == object.getIndex())
	{
		cout << "True" << endl;
	}
	else
	{
		cout << "False" << endl;
	}
}
void Set::operator!=(Set& object)
{
	if (index == object.getIndex())
	{
		int check = 0;
		for (int i(0); i < index; i++)
		{
			for (int j(0); j < object.getIndex(); j++)
			{
				if (mass[i] == object.getElement(j))
				{
					check++;
				}
			}
		}
		if (check == index)
		{
			cout << "False" << endl;
		}
		else {
			cout << "True" << endl;
		}
	}
	else {
		cout << "True" << endl;
	}
}
void Set::operator+(int num)
{
	if (index < size)
	{
		int number = 0;
		for (int i(0); i <= index; i++)
		{
			if (num == this->getElement(i))
			{
				number++;
			}
		}
		if (number == 0)
		{
			mass[index] = num;
			index++;
		}
	}
	else {
		cout << "Mass overflow!" << endl;
	}
}

Set::~Set()
{
	delete[]mass;
}

