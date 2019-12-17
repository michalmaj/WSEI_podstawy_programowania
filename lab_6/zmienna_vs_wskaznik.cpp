#include <iostream>
#include <vector>
#include <string>

// Zwykła zmienna vs wskaźnik

int main()
{
	int liczba{ 10 };

	// informacje o zmiennej:
	std::cout << "Wartosc zmiennej: " << liczba << std::endl;
	std::cout << "Rozmiar zmiennej: " << sizeof(liczba) << std::endl;
	std::cout << "Adres zmiennej w pamieci: " << &liczba << std::endl;

	// informacje o wskaźniku
	int* wsk{nullptr};
	std::cout << "Wartosc wskaznika: " << wsk << std::endl;
	std::cout << "Rozmiar wskaznika " << sizeof(wsk) << std::endl;
	std::cout << "Adres wskaznika w pamieci: " << &wsk << std::endl;


	std::cout << std::endl;

	// rozmiary wskaźnika
	double* wsk2{ nullptr };
	unsigned long long* wsk3{ nullptr };
	std::vector <std::string>* wsk4{ nullptr };
	std::string* wsk5{ nullptr };

	std::cout << sizeof(wsk2) << std::endl;
	std::cout << sizeof(wsk3) << std::endl;
	std::cout << sizeof(wsk4) << std::endl;
	std::cout << sizeof(wsk5) << std::endl;
	return 0;
}