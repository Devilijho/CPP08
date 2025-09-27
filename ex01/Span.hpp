#pragma once

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
		unsigned int longestSpan();
		unsigned int shortestSpan();

		template<typename Iterator>
		void fillSpan(Iterator begin, Iterator end)
{
			size_t distance = std::distance(begin, end);
			if (distance > max_size)
				throw (std::exception());
			list.insert(list.begin(), begin, end);
}

	private:
		unsigned int max_size;
		std::list<int> list;


};
