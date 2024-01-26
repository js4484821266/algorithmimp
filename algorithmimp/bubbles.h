#pragma once
#include<vector>
#include "main.h"

template <class T>
void bubblesort(std::vector<T>& v)
{
	vprint(v);
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v.size() - i - 1; j++)
			if (v[j] > v[j + 1])
				swap(v[j], v[j + 1]);
		vprint(v);
	}
}
