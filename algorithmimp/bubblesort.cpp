#include <iostream>
#include<vector>

template <class T>
void swap(T& a, T& b) noexcept
{
	T c = a;
	a = b;
	b = c;
}

template <class T>
void vprint(const std::vector<T>& v)
{
	for (T e : v)
		std::cout << e << " ";
	std::cout << std::endl;
}

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
