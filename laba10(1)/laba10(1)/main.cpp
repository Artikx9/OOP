#include <iostream>
#include<array>
#include<deque>
#include<algorithm>
#include <initializer_list>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	//1
	array<double, 5> myarray = { 1, 2.2, 3, 4.4, 5 };
	cout << "��������� array: ";
	array<double, 5>::iterator iter;
	for (iter = myarray.begin(); iter != myarray.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	//2
	remove(myarray.begin(), myarray.end(), 3);
	remove(myarray.begin(), myarray.end(), 1);
	myarray[4] = 1.1;
	myarray[2] = 3.3;
	cout << "���������� ��������� array: ";
	for (iter = myarray.begin(); iter != myarray.end(); iter++)
		cout << *iter << " ";
	cout << endl;
	//3
	cout << "����� � ������� reverse_iterator: ";

	for (array<double, 5>::reverse_iterator iter = myarray.rbegin(); iter != myarray.rend(); ++iter)
		cout << *iter << ' ';
	cout << endl;

	cout << "����� � ������� const_iterator: ";

	for (array<double, 5>::const_iterator iter = myarray.cbegin(); iter != myarray.cend(); ++iter)
		cout << *iter << ' ';
	cout << endl << endl;
	//4
	cout << "����� ���������: ";
	deque<double> my_arr = { 11, 44, 55, 66, 77 };
	for (auto i : my_arr)
	{
		cout << i << " ";
	}
	cout << endl;
	//5 
	
	/*copy(my_arr.begin(),my_arr.end(), back_inserter(myarray));
	for (iter = myarray.begin(); iter != myarray.end(); iter++)
		cout << *iter << " ";
	cout << endl;*/
}