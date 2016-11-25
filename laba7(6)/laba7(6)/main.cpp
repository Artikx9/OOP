#include "Set.h"
#include "Setapp.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");

	

	
	cout << "///////////ÏÐÎÂÅÐÊÀ ÄËß ÑÒÀÍÄÀÐÒÍÛÕ ÒÈÏÎÂ///////////" << endl;

	int str7[5] = { 1,2,3,4,5};
	double str9[5] = { 1.5,2,3.7,4.5 };

	String<int> strok3(5);
	strok3 * str7; 
	strok3.show2();
	
	cout << "//////////Êëàññ â êà÷åñâå øàáëîíà///////////" << endl;


	String<Printer> el(100);
	Printer *a = new  Printer("HP");
	Printer *b = new Printer("CANON");
	el + a;
	el + b;
	el.show2();

	cout << "//////////Ôóíêöèÿ-øàáëîí///////////" << endl;

	char str10[10] = { "øàáëîí"};
	String<char> strok4(100);
	strok4 * str10;
	strok4.ret(3);
	strok4.show();
	
	return 0;

}

