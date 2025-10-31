#pragma once

#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

#include <algorithm>
#include <cstddef>
#include <exception>
#include <iterator>
#include <vector>


class Span
{
	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		void addNumber(long n);
		unsigned int longestSpan();
		unsigned int shortestSpan();

		void fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
		unsigned int max_size;
		std::vector<int> list;


};
