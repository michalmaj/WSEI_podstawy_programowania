#include <iostream>


// Wskaźnii są zmiennymi więc można zmieniać ich wartość
// Wskaźnik może być typu NULL
// Wskaźnik przed wersją C++17 mógł być niezainicjalizowany

int main()
{
	double nizsz_cena{ 37.2 };
	double wyzsza_cena{ 100.7 };
	
	double* wsk{ nullptr };

	wsk = &nizsz_cena;
	std::cout << wsk << std::endl; // zwróci adres pamięci -  (*wsk zwróci wartość)

	wsk = &wyzsza_cena;
	std::cout << wsk << std::endl; // zwróci adres pamięci -  (*wsk zwróci wartość)
	return 0;
}