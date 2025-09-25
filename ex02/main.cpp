#include "MutantStack.hpp"
#include <iterator>
#include <array>

int main()
{
	{
		std::cout << "ITERATOR TEST ON MUTANT STACK" << std::endl;
		MutantStack<int> mstack;
		mstack.push(50);
		mstack.push(40);
		mstack.push(30);
		mstack.push(20);
		mstack.push(10);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "Iterating trough stack: " << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::stack<int> pertinentTessssssst;

		pertinentTessssssst = mstack;

		std::cout << s.size() << std::endl;
		std::cout << pertinentTessssssst.size() << std::endl;
		std::cout << "\n\n\n\n";
	}
	{
		std::cout << "ITERATOR TEST ON LIST" << std::endl;
		std::list<int> list;
		list.push_back(50);
		list.push_back(40);
		list.push_back(30);
		list.push_back(20);
		list.push_back(10);
		list.push_back(0);
		std::list<int>::iterator it = list.begin();
		std::list<int>::iterator ite = list.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "Iterating trough list: " << *it << std::endl;
			++it;
		}
		std::cout << "\n\n\n\n";
	{
		std::cout << "ITERATOR TEST ON ARRAY" << std::endl;
		std::array<int, 6> array;
		array.fill(10);
		std::array<int, 6>::iterator it = array.begin();
		std::array<int, 6>::iterator ite = array.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << "Iterating trough array: " << *it << std::endl;
			++it;
		}
	}
	return 0;
}
}
