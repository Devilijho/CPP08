#pragma once

#include <array>
#include <iterator>
#include <list>
#include <vector>
#include <iostream>
#include <algorithm>
#include <exception>

template<class type>
class MutantStack : public std::stack<type>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(MutantStack &other) {this = other;}
		MutantStack &operator=(MutantStack &other)
		{
			if (this != other)
				this = other;
			return *this;
		}

		struct iterator
		{
			std::forward_iterator_tag Iterator_category;
			std::ptrdiff_t difference_type;
			type	*ptr;

			iterator& operator++() { ptr++; return *this;}
			iterator& operator--() { ptr--; return *this;}
			type operator*() { return *ptr;}
			bool operator!=(const iterator& b) { return ptr != b.ptr; };
		};

		iterator begin()
		{
			iterator it;

			it.ptr = &this->top() - this->size() + 1;

			return it;
		}

		iterator end()
		{
			iterator it;

			it.ptr = &this->top() + 1;

			return it;
		}
};
