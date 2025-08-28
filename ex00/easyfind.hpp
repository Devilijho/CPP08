#pragma once

#include <algorithm>
#include <exception>

template<typename T>
int	easyfind(T haystack, int needle)
{
	int pos = std::find(haystack.begin(), haystack.end(), needle);
	if (haystack.end())
		throw std::exception();
	return pos;
}
