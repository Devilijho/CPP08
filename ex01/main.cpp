#include "Span.hpp"
#include <exception>

int	main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
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
		std::cout << "Started filling" << std::endl;
		Span sp(10);
		sp.fillSpan(8);
		std::cout << "Finished filling" << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	return (0);
}
