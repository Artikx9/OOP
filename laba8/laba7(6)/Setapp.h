#pragma once
#include "Set.h"
#include "string.h"

using namespace std;
template<class Temp>
String<Temp>::String(int size)
{
	size_ = size;
	str = new Temp[size];
	index_ = 0;
	for (int i = 0; i < size_; i++)
	{
		str[i] = '\0';
	}
}
template<class Temp>
void String<Temp>::operator+(Temp *s)
{
	str[index_] = *s;
	index_++;
}
template<class Temp>
void String<Temp>::operator -(Temp pos)
{
	for (int i = pos; i<size_; i++)
	{
		str[i] = str[i + 1];
	}
	index_--;
}
template<class Temp>
void String<Temp>::show()
{
	std::cout << str << std::endl;

}

template<class Temp>
int String<Temp>::operator!=(Temp *s)
{
	if (strcmp(str, s) == 0)
	{
		cout << "Строки равны" << endl;
	}
	else { cout << "Строки не равны" << endl; }
	return 0;
}
template<class Temp>
int String<Temp>::operator>(Temp *s)
{
	if (strstr(str, s) == NULL)
	{
		cout << "В строке нет этой подстраки" << endl;
	}
	else { cout << "В строке есть эта подстрака" << endl; }
	return 0;
}

template<class Temp>
void String<Temp>::operator *(Temp *s)
{
	for (int i = 0; i<size_; i++)
	{
		str[i] = s[i];
		index_++;
	}
}

template<class Temp>
 Temp String<Temp>::ret(int value)
{
	 for (int i = 0; i < index_; i++)
	 {
		 str[value] = '\0';
	 }
	 return *str;
	
}

template<class Temp>
void String<Temp>::show2()
{
	for (int i=0; i < index_;i++)
	{
		cout << str[i] << endl;
	}
	cout << endl;
}

template<class Temp>
String<Temp>::~String()
{

	delete[] str;
}


