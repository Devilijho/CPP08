#include "Span.hpp"
#include <algorithm>

Span::Span()
{
	max_size = 0;
}

Span::Span(unsigned int n) : max_size(n){}

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
	list.push_back(n);
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
	std::vector<int> listTemp(list);
	int min_min, min;

	if (list.size() <= 1)
		throw (std::exception());
	stable_sort(listTemp.begin(), listTemp.end());
	min_min = listTemp[1] - listTemp[0];
	for (size_t i = 0; i < listTemp.size() - 1; i++)
	{
		min = listTemp[i + 1] - listTemp[i];
		if ( min < min_min)
			min_min = min;
	}
	return (min_min);
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) + this->list.size() > max_size)
		throw std::exception();
	list.insert(list.end(), begin, end);
	std::cout << std::endl;
}
