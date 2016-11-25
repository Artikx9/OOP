#include "Set.h"
#include "Setapp.h"
#include "Exeptions.h"
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");

	

	
	cout << "//////////////////////" << endl;
	int const size=6;
	int str7[size] = { 1,2,3,4,5};
	try {
		String<int> strok3(5);
		strok3 * str7;
		strok3.show2();
		if (sizeof(str7)/sizeof(str7[0]) > 4) { throw Big("Массив большой, его размер ", size); }
		if (sizeof (str7) / sizeof(str7[0]) < 4) throw Small("Массив маленький его размер ", size);
	} 
	
	catch (Big obj) { cout << obj.what() << size << endl; }
	catch (Small obj) { cout << obj.what()<<size<< endl; }
	



	cout << "//////////Функция-шаблон///////////" << endl;
	try
	{

		int const size = 7; int p = 10;
		if (size < p) throw Error(p, "В этом слове меньше букв, чем ");
		char str10[size] = { "шаблон" };
		String<char> strok4(100);
		strok4 * str10;
		
		strok4.ret(p);
		strok4.show();
	}
	catch (Error k)
	{
		cout <<k.t<<k.number <<endl;
	}
	
	return 0;

}

