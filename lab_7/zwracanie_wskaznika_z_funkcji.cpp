#include <iostream>
#include <string>
#include <vector>

// zwracanie wskaźnika z funkcji

int* tworz_tablice(size_t rozmiar, int wartosci = 0)
{
	int* nowa_tablica{ nullptr };
	nowa_tablica = new int[rozmiar];

	for (size_t i{ 0 }; i < rozmiar; ++i)
	{
		*(nowa_tablica + i) = wartosci;
	}

	return nowa_tablica;
}

void wyswietl(const int* const tablica, size_t rozmiar)
{
	for (size_t i{ 0 }; i < rozmiar; ++i)
	{
		std::cout << tablica[i] << "\n";
	}
	std::cout << std::endl;
}
int main()
{
	int* moja_tablica{ nullptr };
	size_t rozmiar;
	int wartosci;

	std::cout << "Jak duza ma byc tablica? ";
	std::cin >> rozmiar;
	std::cout << "Jakimi wartosciami ma byc zainicjalizowana? ";
	std::cin >> wartosci;

	moja_tablica = tworz_tablice(rozmiar, wartosci);

	std::cout << std::endl;

	wyswietl(moja_tablica, rozmiar);
	delete[] moja_tablica;
	return 0;
}