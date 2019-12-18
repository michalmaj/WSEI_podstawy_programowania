#include <iostream>
#include <string>
#include <vector>

// referencje


int main()
{
	int liczba{ 10 };
	int& referencja{ liczba };

	std::cout << liczba << std::endl;
	std::cout << referencja << std::endl;

	std::cout << std::endl;

	liczba = 200;
	std::cout << liczba << std::endl;
	std::cout << referencja << std::endl;
	
	std::cout << std::endl;

	referencja = 300;
	std::cout << liczba << std::endl;
	std::cout << referencja << std::endl;
	return 0;
}