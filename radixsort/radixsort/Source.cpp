#include "element.h"
#include<iostream>
#include "queue.h"
using namespace std;
void main() {

	element e(1);
	element r(5);
	cout << e.Getmem() << endl;
	e.Setmem(2);
	cout << e.Getmem() << endl;
	cout << e.Getnext() << endl;
	e.Setnext(&r);
	cout << e.Getnext() << endl;
	system("PAUSE");
}