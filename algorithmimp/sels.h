#pragma once
#include "main.h"

template <class T>
void sels(std::vector<T>& v)
{
	vprint(v);
	for (int i = 0; i < v.size(); i++)
	{
		int m = i;
		for (int j = i + 1; j < v.size(); j++)
			if (v[m] > v[j])
				m = j;
		swap(v[i], v[m]);
		vprint(v);
	}
}
