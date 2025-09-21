#include "Span.hpp"
#include <exception>
#include <vector>

int	main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "Test expection handling" << std::endl;
		Span sp(0);
		try{
			sp.addNumber(6);
		}
		catch (std::exception &e)
		{
			std::cout << "Error" << std::endl;
		}
	}
	{
		std::cout << "Test fill from a list: " << std::endl;
		std::list<int> source;
		source.push_back(10);
		source.push_back(20);
		source.push_back(30);
		source.push_back(40);

		Span copy = Span(5);
		copy.fillSpan(source.begin(), source.end());
		std::cout << "Shortest span: " << copy.shortestSpan() << std::endl;
		std::cout << "Longest span: " << copy.longestSpan() << std::endl;

	}
	{
		std::cout << "Test filling from a vector: " << std::endl;
		std::vector<int> source;
		source.push_back(10);
		source.push_back(20);
		source.push_back(30);
		source.push_back(40);

		Span copy = Span(5);
		copy.fillSpan(source.begin(), source.end());
		std::cout << "Shortest span: " << copy.shortestSpan() << std::endl;
		std::cout << "Longest span: " << copy.longestSpan() << std::endl;

	}
	return (0);
}
