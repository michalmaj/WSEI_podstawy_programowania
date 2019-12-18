#include <iostream>
#include <string>
#include <vector>

// przekazanie wskaźnika do funkcji

void pomnoz(int* wsk)
{
	*wsk *= 2;
}

int main()
{
	int liczba{ 10 };
	int* wsk{ nullptr };

	std::cout << "Wartosc liczby to: " << liczba << std::endl;
	pomnoz(&liczba);
	std::cout << "Wartosc liczby to: " << liczba << std::endl;

	std::cout << std::endl;

	wsk = &liczba;
	pomnoz(wsk);
	std::cout << "Wartosc liczby to: " << liczba << std::endl;

	
	return 0;
}