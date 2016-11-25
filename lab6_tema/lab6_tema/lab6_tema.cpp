#include "stdafx.h"
#include "Set.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	srand((unsigned)time(NULL));

	/*Set *pr1 = new Set(5, 0);

	pr1->addElement(3);
	pr1->addElement(1);
	pr1->addElement(2);
	pr1->addElement(34);

	(*pr1) - 3;

	cout << "________________________"<<endl;

	pr1->showMass();*/

	/*Set *pr1 = new Set(5, 0);

	pr1->addElement(3);
	pr1->addElement(1);
	pr1->addElement(2);
	pr1->addElement(34);

	Set *pr2 = new Set(5, 0);

	pr2->addElement(3);
	pr2->addElement(1);
	pr2->addElement(65);
	pr2->addElement(34);

	(*pr1) != (*pr2);*/

Set *pr1 = new Set(5, 0);

	pr1->addElement(3);
	pr1->addElement(1);
	(*pr1) + 4;
	(*pr1) + 32;

	pr1->showMass();
	system("pause");
	return 0;
	
}

