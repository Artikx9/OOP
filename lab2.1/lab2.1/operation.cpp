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
	cout << "������� ����� " << endl;
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
	cout << "������= " << str << endl;

	cout << "������ ������: " << str.size() << endl;

}
void String::test()
{

	cout << "������� ������ ��� ��������: ";
	cin >> b;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == b)
		{
			cout << "������ ���������� \n"; break;
		}

		i++;
	}


}

void String::simbol()
{

	cout << "������� ������ ������� ������ ��������: ";
	cin >> b;
	cout << "������� ����� ������: ";
	cin >> l;
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == b)
		{
			str[i] = l;
			cout << "������ ������ \n" << str << endl; break;
		}

		i++;
	}


}

String::~String()
{
	cout << "�������� ���������� \n";
}