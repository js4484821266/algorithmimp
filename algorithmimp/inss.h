#pragma once
#include "main.h"

template <class T>
void inss(std::vector<T> v)
{
	vprint(v);
	for (int i = 1; i < v.size(); i++)
	{
		for (int j = 0; i != j && v[i - j] < v[i - j - 1]; j++)
			swap(v[i - j], v[i - j - 1]);
		vprint(v);
	}
}
