#include "element.h"
#include<iostream>
#include "queue.h"
using namespace std;
void main() {


	/*element e(1);
	element r(5);
	cout << e.Getmem() << endl;
	e.Setmem(2);
	cout << e.Getmem() << endl;
	cout << e.Getnext() << endl;
	e.Setnext(&r);
	cout << e.Getnext() << endl;*/

	//queue q;
	//cout <<"is empty "<< q.Isempty() << endl;
	//cout << "Push <5> "<< endl; 
	//q.Push(5);
	//q.Push(6);
	//
	//cout <<"is empty "<< q.Isempty() << endl;
	///*cout <<(int*)q.getcount() << endl;
	//cout << (int*)q.getlast() << endl;*/
	//cout << q.Pop() << endl;
	//int a;
	//
	//cout << q.Pop()<< endl;
	//q.Push(111);
	//cout << q.Pop() << endl;
	//cout << q.Pop() << endl;
	
	queue * q;
   q = new  queue[10] ;
	
	//void radixsort(int * arr, int size) {

   int arr[9] = {123,323,45,66,54,6,34,1,0};
	int size = 9;
	//find max elem in array
		int max = arr[0];
		for (size_t i = 0; i < size; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
//find  number of radix in max
		int k = 0;
		while (max != 0)
		{
			k++;
			max /=  10;
		}

		//sort algoritm
		int t=0;
		int y=0;
		for (size_t i = 0; i < k; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				t = arr[j] / pow(10, i);
				y = t % 10;
				q[y].Push(arr[j]);
			}
			size = 0;
			for (size_t l= 0; l < 10; l++)
			{
				while (!q[l].Isempty())
					arr[size++] = q[l].Pop();
			}
			for (size_t p = 0; p < size; p++)
			{
				cout << arr[p] << " ";
			}
			cout << endl;
		}


	system("PAUSE");
}