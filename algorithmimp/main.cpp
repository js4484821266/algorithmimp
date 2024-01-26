#include<iostream>
#include<vector>
template <class T>
extern void bubblesort(std::vector<T> v);

int main(void)
{
	std::vector<int> v{5, 8, 8, 6, 8, 9, 9, 6, 7, 8};
	bubblesort(v);
	return 0;
}
