#pragma once

#include <array>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>


class Span
{
	public:
		Span(unsigned int n);
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);

		void addNumber(long n);
		void fillSpan(long value);
		unsigned int longestSpan();
		unsigned int shortestSpan();

	private:
		unsigned int max_size;
		std::list<int> list;


};
