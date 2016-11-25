#pragma once
#include "stdafx.h"
#include "Set.h"

using namespace std;
template<class Temp>
Set<Temp>::Set(int N)
{
		size = N;
		mass = new Temp[size];
		index = 0;
		
}
template<class Temp>
void Set<Temp>::addElement(Temp num)
{
	if (index < size)
	{
		Temp number = 0;
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
template<class Temp>
void Set<Temp>::delElement(int ind)
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
template<class Temp>
Temp Set<Temp>::getElement(int ind)
{
	return mass[ind];
}
template<class Temp>
int Set<Temp>::getSize()
{
	return size;
}
template<class Temp>
int Set<Temp>::getIndex()
{
	return index;
}
template<class Temp>
int Set<Temp>::getElementPosition(int element)
{
	for (int i(0); i < index; i++)
	{
		if (mass[i] == element)
		{
			return i;
		}
	}
}
template<class Temp>
bool Set<Temp>::checkForElement(int element)
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
template<class Temp>
void Set<Temp>::showMass()
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
template<class Temp>
void Set<Temp>::operator-(int element)
{
	if (this->checkForElement(element))
	{
		for (int i = this->getElementPosition(element); i < index - 1; i++)
		{
			mass[i] = mass[i + 1];
		}
		index--;
	}
	else {
		cout << "No such element!" << endl;
	}
}
template<class Temp>
void Set<Temp>::operator*(Set obj)
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
template<class Temp>
void Set<Temp>::operator<(Set& object)
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
template<class Temp>
void Set<Temp>::operator!=(Set& object)
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
template<class Temp>
void Set<Temp>::operator+(Temp num)
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


template<class Temp>
Set<Temp>::~Set()
{
	delete[]mass;
}

std::ostream& operator<<(std::ostream& os, Printer* object)
{
	os << "Name: " << object->gettype() << endl;
	return os;
}






