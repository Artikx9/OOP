#pragma once

#include <iostream>

template<class Temp>
class String
{
private:
	Temp* str;
	Temp* strv;
	int size_;
	int index_;
public:
	String(int);
	void operator+( Temp*);
	void operator -(Temp);
	int  operator != (Temp*);
	int  operator > (Temp*);
	void operator*(Temp * s);
	Temp ret(int value);
	void show();
	void show2();
	~String();
};


class Printer
{
	char *name;
public:
	Printer();
	Printer(char * Name);
	void settype(char *Name);
	char* gettype();
	friend std::ostream& operator<<(std::ostream& os, Printer& obj)
	{
		os << obj.gettype() << std::endl;
		return os;
	}
	};

