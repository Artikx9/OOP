#include "Set.h"
#include "string.h"
using namespace std;


Printer::Printer()
{
	
}

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


