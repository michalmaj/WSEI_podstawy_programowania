#include <string>
#include <iostream>

int main()
{
	// deklaracja zmiennej slowo jako string
	std::string slowo;
	
	std::cout << "Podaj jakies slowo, wyrazenie lub zdanie: " << std::endl;
	
	// wczytanie zmiennej slowo przy użyciu funkcji getline()
	std::getline(std::cin, slowo);

	std::cout << "Podane przez Ciebie wyrazenie to: " << slowo << std::endl;

	return 0;
}
