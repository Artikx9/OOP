#include "stdafx.h"
#include "iostream"
#include <vector>
#include "String.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "rus");
	const int size = 5;
	String str;

	str.read();
	str.test();
	str.simbol();
	String mass_str[size];
	string str_formass;

	int kol;
	string slovo;

	for (int i(0); i < size; i++)
	{
	cout << "¬ведите строки: " << endl;
	cin >> str_formass;
	mass_str[i].setString(str_formass);
	}
	cout << "¬ведите длинну строки" << endl;
	cin >> kol;

	for (int i(0); i < size; i++)
	{
	if (mass_str[i].size_str() == kol)
	{
	mass_str[i].getString();
	}
	}

	cout << "¬ведите слово" << endl;
	cin >> slovo;
	for (int i(0); i < size; i++)
	{
	if (mass_str[i].trim_str() == slovo)
	{
	mass_str[i].getString();
	}
	}



	system("pause");
}
