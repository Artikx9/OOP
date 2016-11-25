#include "Set.h"

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");

	char str1[10] = { "Привет " };
	char str2[10] = { "Пока" };
	char str5[10] = { "Пока" };

	String strok(100);
	strok + str1;
	strok + str2;
	strok > str5;
	strok - 3;
    strok.show();


	char str3[10] = { "Привет" };
	char str4[10] = { "Привет" };

	String strok2(100);
	strok2 + str3;
	strok2 != str4;
	return 0;

}

