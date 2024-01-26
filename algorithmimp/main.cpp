#include<iostream>
#include<vector>
#include "bubbles.h"
#include "sels.h"

int main(void)
{
	std::vector<int> v{1, 3, 5, 7, 9, 0, 8, 6, 4, 2};
	sels(v);
	return 0;
}
