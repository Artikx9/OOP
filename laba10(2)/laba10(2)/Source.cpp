#include "printer.h"
#include <memory>
#include <iostream>
#include <queue>
#include <algorithm>
#include <iterator>
#include <forward_list>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "rus");
	//1
	Printer *print1 = new Printer("MTK");
	Printer *print2 = new Printer("Scanner");

	unique_ptr<queue<Printer*> > uptr(new queue<Printer*>);
	uptr->push(print1);
	uptr->push(print2);
	cout << "Очередь:\n " << endl;;
	cout<<uptr->front()<<endl;
	cout<<uptr->back()<<endl;
	 
	cout << endl;

	//2
	Printer *print3 = new Printer("Printer");
	uptr->pop();
	uptr->push(print3);
	cout << "Очередь:\n " << endl;;
	cout << uptr->front() << endl;
	cout << uptr->back() << endl;

	cout << endl;

	//4
	
	Printer *printer1 = new Printer("One");
    Printer *printer2 = new Printer("EPSON");
	shared_ptr<forward_list<Printer*>> list(new forward_list<Printer*>);

	list->push_front(printer1);
	list->push_front(printer2);
	for (auto i : *list)
	{
		cout << i << endl;
	}

	cout << endl;
	//5
	forward_list<Printer*>::iterator list_begin = list->begin();
	forward_list<Printer*>::iterator list_end = list->end();



	for (int k(0); k < uptr->size(); k++)*	{
		uptr->pop();
	}
	
	for (auto list = list_begin; list != list_end; list++)
	{
		char p = ist;
		uptr->push();
	}

	cout << uptr->front() << endl;
	cout << uptr->back() << endl;

	return 0;
}









