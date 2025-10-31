#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vector;
	vector.push_back(1);
	vector.push_back(4);
	vector.push_back(6);
	vector.push_back(9);
	std::cout << "Created vector with values : 1 4 6 9" << std::endl;

	try
	{
		std::cout << "Index of value 4 in vector: " << easyfind(vector, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 4 on the vector" << std::endl;
	}


	try
	{
		std::cout << "Index of value 6 in vector: " << easyfind(vector, 6) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 6 on the vector" << std::endl;
	}

	try
	{
		std::cout << "Index of value 3 in vector: " << easyfind(vector, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 3 on the vector" << std::endl;
	}

	try
	{
		std::cout << "Index of value 1 in vector: " << easyfind(vector, 1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 1 on the vector" << std::endl;
	}

	try
	{
		std::cout << "Index of value 9 in vector: " << easyfind(vector, 9) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 9 on the vector" << std::endl;
	}


	std::list<int> vectorNotSoVector;
	vectorNotSoVector.push_back(0);
	vectorNotSoVector.push_back(2);
	vectorNotSoVector.push_back(4);
	vectorNotSoVector.push_back(6);
	vectorNotSoVector.push_back(8);
	vectorNotSoVector.push_back(10);
	vectorNotSoVector.push_back(100);
	std::cout << "Created list with values : 0 2 4 6 8 10 100" << std::endl;

	try
	{
		std::cout << "Index of value 8 in list: " << easyfind(vectorNotSoVector, 8) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 8 on the list" << std::endl;
	}
	try
	{
		std::cout << "Index of value 9 in list: " << easyfind(vectorNotSoVector, 9) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Didn't find 9 on the list" << std::endl;
	}

	return (0);
}
