#pragma once
#include "element.h"
class queue
{

private: 
	element* last;
	element * first;
	int count;
public:
	queue() {
		last = 0;
		first = 0;
		count = 0;
	}
	~queue() {
		delete first;
	}
	bool Isempty() { return (count == 0); };
	void Push(int mem) {
		element * tmp = new element(mem);
		if (count == 0) {
			first = tmp;
			last = tmp;
			count = 1;
		}
		else {
			last->Setnext(tmp);
			last = tmp;
			count++;
		}
	}
	int Pop() 
	{
		if (count == 0)
			return -1;
		else 
		{
			element * tmp = first;
			first = first->Getnext();
			int a = tmp->Getmem();
			tmp->Setnext(0);
			delete tmp;
			count--;
		
		    if (count == 0) 
			last = 0;
		
		     return a;
		}
	}
	queue(const queue & tmp) {
		element* cur = tmp.first;
		while (cur != 0)
		{
			this->Push(cur->Getmem());
			cur = cur->Getnext();
		}
	}
	queue & operator=(const queue & tmp) {
		delete first;
		first = 0;
		count = 0;
		last = 0;
		element *cur = tmp.first;
		while (cur != 0)
		{
			Push(cur->Getmem());
			cur = cur->Getnext();
		}
		

	}
	int getcount() {
		return count;
	}
	void * getlast() {
		return last;
	}
	void * getfirst() {
		return first;
	}

};

