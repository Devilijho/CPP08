#pragma once

#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

template<typename T>
int	easyfind(T haystack, int needle)
{
	typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
	if (it == haystack.end())
		throw std::exception();
	return (std::distance(haystack.begin(), it));
}
