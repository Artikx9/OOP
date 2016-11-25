#include "Set.h"
#include "string.h"
using namespace std;
String::String(int size)
{
	size_ = size;
	str = new char[size];
	for (int i = 0; i < size_; i++)
	{
		str[i] = '\0';
	}
}

void String::operator+(char *s)
{
	strcat(str, s); 
}

void String::operator -(int pos)
{ 
	for (int i = pos;i<size_;i++)
	{
		str[i] = str[i + 1];
	}
}

void String::show()
{
	std::cout << str << std::endl;
}

int String::operator!=(char *s)
{
	if (strcmp(str, s) == 0)
	{
		cout << "Строки равны" << endl;
	}
	else { cout << "Строки не равны" << endl; }
	return 0;
}

int String::operator>(char *s)
{
	if (strstr(str, s) == NULL)
	{
		cout << "В строке нет этой подстраки" << endl;
	}
	else { cout << "В строке есть эта подстрака" << endl; }
	return 0;
}

String::~String()
{
	delete[] str;
}
