#include "stdafx.h"
#include "String.h"
#include <iostream>
using namespace std;

String::String()
{
	cout << "Konstructor \n";
}

void String::read()
{
	cout << "Введите сроку " << endl;
	cin >> str;
}


void	String::setString(string STR)
{
	str = STR;

}
int String::size_str()
{
	return str.size();
}
string String::trim_str()
{
	return str;
}
void String::getString()
{
	cout << "Строка= " << str << endl;

	cout << "Длинна строки: " << str.size() << endl;

}
void String::test()
{

	cout << "Введите символ для проверки: ";
	cin >> b;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == b)
		{
			cout << "Символ существует \n"; break;
		}

		i++;
	}


}

void String::simbol()
{

	cout << "Введите символ который хотите заменить: ";
	cin >> b;
	cout << "Введите новый символ: ";
	cin >> l;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == b)
		{
			str[i] = l;
			cout << "Символ заменён \n" << str << endl; break;
		}

		i++;
	}


}

String::~String()
{
	cout << "Сработал Деструктор \n";
}