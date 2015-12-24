#pragma once
class element
{

private: int mem;
		 element * next;
public:
	element(int _mem = 0) {
		mem = _mem;
		next = 0;
	};
	element(const element & tmp) {
		mem = tmp.mem;
		next = 0;
	};
	element & operator=(const element & tmp) {
		mem = tmp.mem;
		return *this;
	}
	int  Getmem() { return mem; };
	void Setmem(int value) { mem = value; };
	element * Getnext() { return next; }
	void Setnext(element * tmp) { next = tmp; }
	~element() { 
		if (next !=0)
		delete[] next; }


};

