#pragma once

#include <iostream>


class String
{
private:
	char* str;
	int size_;
public:
	String(int);
	void	operator +(char*);
	void operator -(int);
	void show();
	int operator != (char*);
	int operator > (char*);
	~String();
};

