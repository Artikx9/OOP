#pragma once
using namespace std;
#include <string>
#include <string.h>


class String
{
private:
	string str;
	char l;
	char b;
public:
	String();

	/*String(int s, int k, int c)
	{


	}*/
	//String(const String &  obj);
	



	void read();
	void	setString(string STR);
	int size_str();
	string trim_str();
	void getString();
	void test();
	void simbol();



	~String();
	

};


