#include "stdafx.h"
#include "Set.h"
#include<iostream>
Printer::Printer(char* Name)
{
	Printer::settype(Name);
}
void Printer::settype(char * Name)
{
	name = Name;
}

char* Printer::gettype()
{
	return name;
}





