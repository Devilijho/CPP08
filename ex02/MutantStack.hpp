#pragma once

#include <array>
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
		MutantStack(MutantStack &other){(void)other;}
		MutantStack &operator=(MutantStack &other){(void)other;return *this;}
		void begin();
		void end();
};
