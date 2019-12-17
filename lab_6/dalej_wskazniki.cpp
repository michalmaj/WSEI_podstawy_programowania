#include <iostream>
#include <vector>
#include <string>

int main()
{
	int liczba{ 3 };
	std::cout << "Wartosc liczby to: " << liczba << std::endl;
	std::cout << "Rozmiar liczby to: " << sizeof(liczba) << std::endl;
	std::cout << "Adres liczby to: " << &liczba << std::endl;

	int* wsk{ nullptr };
	std::cout << "\nWartosc wskaznika to: " << wsk << std::endl;
	std::cout << "Rozmiar wskaznika to: " << sizeof(wsk) << std::endl;
	std::cout << "Adres wskaznika to: " << &wsk << std::endl;


	int* wsk1{ nullptr };
	double* wsk2{ nullptr };
	unsigned long long* wsk3{ nullptr };
	std::vector<std::string>* wsk4{ nullptr };
	std::string* wsk5{ nullptr };

	
	int cyfra{ 7 };
	double wynik{ 22.9 };
	
	int* tymczasowy{ nullptr };
	std::cout << "\nAdres tymczasowy to: " << &tymczasowy << std::endl;

	tymczasowy = &cyfra;
	std::cout << "\nWartosc cyfra to: " << cyfra << std::endl;
	std::cout << "Rozmiar cyfry to: " << sizeof(cyfra) << std::endl;
	std::cout << "Adres cyfry to: " << &cyfra << std::endl;
	std::cout << "\nWartosc tymczasowy to: " << tymczasowy << std::endl;

	// auto* auto_wsk{ nullptr }; // generuje błąd
	return 0;
}