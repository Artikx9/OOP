#pragma once
#include <iostream>
#include "Set.h"
#include <exception>


class Error : public exception {
public:
	int	number;
	char *t;
	Error(int p, char *c)
	{
		number = p;
		t = c;
	}
};

class Big: public exception {
private:
	char *s;
	int sz;
public:
	Big(char *c, int const size)
	{
		s = c;
		sz = size;
	 }
	char const* what() const

	{

		return  s;

	}


};

class Small : public exception {
private:
	char *s;
	int sz;
public:
	Small(char *c, int const size)
	{
		s = c;
		sz = size;

	}
	char const* what() const

	{

		return s;
	}


};