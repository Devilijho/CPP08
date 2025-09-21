#include "easyfind.hpp"
#include <exception>

int	main(void)
{
	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(4);
	vector.push_back(6);
	vector.push_back(9);

	try
	{
		std::cout << "Index of value in vector: " << easyfind(vector, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 4 on the vector" << std::endl;
	}

	try
	{
		std::cout << "Index of value in vector: " << easyfind(vector, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 3 on the vector" << std::endl;
	}

	return (0);
}
