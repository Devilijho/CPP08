#include "Span.hpp"
#include <exception>

Span::Span(unsigned int n) : max_size(n) {}

Span::~Span() {}

Span::Span(const Span &other)
{
	this->list = other.list;
	this->max_size = other.max_size;
}

Span &Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->list = other.list;
		this->max_size = other.max_size;
	}
	return *this;
}

void Span::addNumber(long n)
{
	if (list.size() == max_size)
		throw (std::exception());
	list.push_front(n);
}

unsigned int Span::longestSpan()
{
	if (list.size() <= 1)
		throw (std::exception());
	int max = *max_element(list.begin(), list.end());
	int min = *min_element(list.begin(), list.end());
	return (max - min);
}

unsigned int Span::shortestSpan()
{
	std::list<int> listTemp(list);
	int min = *min_element(list.begin(), list.end());
	if (list.size() <= 1)
		throw (std::exception());
	listTemp.sort();
	listTemp.pop_front();
	int s_min = listTemp.front();
	if (s_min - min == 0)
		return (0);
	else
		return (s_min - min - 1);
}

void Span::fillSpan(long value)
{
	if (max_size == 0)
		throw (std::exception());
	list.clear();
	for (unsigned int i = 0; i < max_size; ++i)
	{
		list.push_back(value);
	}
}
