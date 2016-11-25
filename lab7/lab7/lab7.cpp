#include "stdafx.h"
#include "setapp.h"
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));
	

	
	Set<Printer*> *pr1 = new Set<Printer*>(5);
	Printer *a=new Printer("HP");
	Printer *b=new Printer("CANON");
	Printer *c = new Printer("EXPLEN");
	Printer *d = new Printer("SAMSUNG");
	pr1->addElement(a);
	pr1->addElement(b);
	(*pr1) + c;
	(*pr1) + d;

	pr1->showMass();
	system("pause");
	
	return 0;
	
	
	/*Set<int> *pr1 = new Set<int>(5);

	pr1->addElement(3);
	pr1->addElement(1);
	(*pr1) + 4;
	(*pr1) + 32;

	pr1->showMass();
	system("pause");
	return 0;
	*/



}


