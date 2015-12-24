#pragma once
#include <math.h>
#include"queue.h"
class radixsort
{

private : 
	queue * q;
public:
	radixsort(int * arr, int size)
	{
		q = new queue[10];
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
			max /= 10;
		}

		//sort algoritm
		int t = 0;
		int y = 0;
		for (size_t i = 0; i < k; i++)
		{
			for (size_t j = 0; j < size; j++)
			{
				t = arr[j] / pow(10, i);
				y = t % 10;
				q[y].Push(arr[j]);
			}
			size = 0;
			for (size_t l = 0; l < 10; l++)
			{
				while (!q[l].Isempty())
					arr[size++] = q[l].Pop();
			}
		}
		
	}
	~radixsort() {
		delete q;
	}


};

