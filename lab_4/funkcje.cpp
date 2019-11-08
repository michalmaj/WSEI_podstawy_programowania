#include <iostream>
/*
	Przykład funkcji z argumentem
*/
// funkcja przyjmuje dwa argumenty (w tym przypadku wynik i liczba
void WyswietlWynik(int wynik, int liczba)
{
	std::cout << "Wynikiem podniesienia liczby " << liczba;
	std::cout << " jest: " << wynik << std::endl;
}

// funkcja przyjmuje jeden argument
int PodniesDoKwadratu(int liczba)
{
	return liczba * liczba;
}

// funkcja bez argumentów
int PodaLiczbe()
{
	int liczba{};
	std::cout << "Podaj liczbe, ktora chcesz podniesc do kwardatu: ";
	std::cin >> liczba;

	return liczba;
}

// główna funkcja
int main()
{
	// przypisanie do zmiennej liczba wartości zwróconej z funkcji PodajLiczbe
	// proszę zwrócić uwagę, że do funkcji nic nie przekazujemy!
	int liczba{ PodaLiczbe() };

	// przypisanie do zmiennej wynik wartości zwróconej z funckji PodniesDoKwadratu
	// proszę zwrócić uwagę, że do funkcji przekazujemy wartość zmiennej liczba
	int wynik{ PodniesDoKwadratu(liczba) };
	
	// wywołanie funkcji WyswietlWynik i przekazanie do niej wartości zmiennych wynik i liczba
	WyswietlWynik(wynik, liczba);

	return 0;
}