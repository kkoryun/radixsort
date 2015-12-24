#pragma once
#include <math.h>
#include"queue.h"
class radixsort
{
private : 
	queue q;
public:
	radixsort(int * arr, int size){
		q = new queue()[10];
		int max = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (max < arr[i])
				max = arr[i];
		}
		int k = 0;
		while (max !=0)
		{
			k++;
			max = max / 10;
		}
		for (size_t i = 0; i < k; i++)
			for (size_t j = 0; j < size; j++)
				q[(arr[j] / pow(10, i) % 10)] = arr[i];
		
		size = 0;
		for (size_t i = 0; i < 10; i++)
		{
			while (!q.Isempty())
				arr[size++] = q[i].Pop();
		}
	}
	~radixsort();
};

