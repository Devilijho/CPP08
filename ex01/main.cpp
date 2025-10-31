#include "Span.hpp"
#include <cstdlib>
#include <ctime>
#include <exception>
#include <sys/types.h>
#include <vector>

int	main(void)
{
	{
		std::cout << "_____TEST STANDARD_____" << std::endl;

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
		std::cout << "_____TEST EMPTY SPAN CLASS_____" << std::endl;
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
		std::cout << "_____TEST FILLING SPAN CLASS_____" << std::endl;
		Span spp(10000);
		std::vector<int> source;
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
			source.push_back(rand());
		try
		{
			spp.fillSpan(source.begin(), source.end());
		}
		catch (std::exception &e)
		{
			std::cout << "Error" << std::endl;
		}
		std::cout << "Shortest span: " << spp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << spp.longestSpan() << std::endl;
	}
	return (0);
}
