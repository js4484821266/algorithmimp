#pragma once
#include <iostream>
#include <vector>

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
