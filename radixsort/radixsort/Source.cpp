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

	queue q;
	cout <<"is empty "<< q.Isempty() << endl;
	cout << "Push <5> "<< endl; 
	q.Push(5);
	q.Push(6);
	
	cout <<"is empty "<< q.Isempty() << endl;
	/*cout <<(int*)q.getcount() << endl;
	cout << (int*)q.getlast() << endl;*/
	cout << q.Pop() << endl;
	int a;
	
	cout << q.Pop()<< endl;
	q.Push(111);
	cout << q.Pop() << endl;
	cout << q.Pop() << endl;

	system("PAUSE");
}