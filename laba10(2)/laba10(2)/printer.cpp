#include "printer.h"
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

std::ostream& operator<<(std::ostream& os, Printer* object)

{

	os << "Model: " << object->gettype() << endl;

	return os;

}

std::ostream& operator<<(std::ostream& os, Printer& object)

{

	os << "Model: " << object.gettype() << endl;
	return os;

}
