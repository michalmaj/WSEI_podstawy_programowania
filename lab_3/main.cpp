#include <iostream>

// Funkcja wyświetlająca intro - funkcja void nic nie zwraca
void WysIntro()
{
	std::cout << "Jestes tajnym agentem, ktory wlamuje sie do strzezonej serwerowni\n";
	std::cout << "Musisz podac wlasciwe haslo, zeby przejsc dalej...\n" << std::endl;
}

// Funkcja bool zwraca true lub false
bool UruchomGre()
{
	WysIntro();

	// Zmienne przechowujące liczby
	const int KodA = 4;
	const int KodB = 3;
	const int KodC = 2;

	// Suma zmiennych
	const int KodSuma = KodA + KodB + KodC;
	// Ioczyn zmiennych
	const int KodIloczyn = KodA * KodB * KodC;

	std::cout << std::endl;
	std::cout << "+ W kodzie znajduja sie trzy zmienne";
	std::cout << "\n+ Sumuja sie do: " << KodSuma;
	std::cout << "\n+ Mnoza sie do: " << KodIloczyn << std::endl;

	// Zadeklarowanie zmiennych bez inicjalizacji
	// Przechowuje strzaly gracza
	int StrzalA, StrzalB, StrzalC;
	// Wczytanie kolejnych zmiennych
	std::cin >> StrzalA >> StrzalB >> StrzalC;

	int StrzalSuma = StrzalA + StrzalB + StrzalC;
	int Strzalloczyn = StrzalA * StrzalB * StrzalC;

	/*
		Blok if dla porównainia
		zadanej sumy i iloczynu
		z sumą i iloczynem podamym przez gracza
	*/
	if (StrzalSuma == KodSuma && Strzalloczyn == KodIloczyn)
	{
		std::cout << "Zwyciestwo!" << std::endl;
		// Zwraca true, jeżeli odgadnięto
		return true;
	}
	else
	{
		std::cout << "Przegrana ;(" << std::endl;
		// Zwraca false
		return false;
	}

}

// Funkcja main - tylko jedna na program
int main()
{
	int PoziomTrudnosci = 1;

	while (true)
	{
		/* 
			Przypisanie do zmiennej watrości, 
			która zostanie zwrócona przez funkcję UruchomGre()
		*/
		bool bUkonczonoGre = UruchomGre();
		// Czyści błędy na wejściu
		std::cin.clear();
		// Odrzuca aktualny bufor wejścia
		std::cin.ignore();

		if (bUkonczonoGre)
		{
			// Zwiększenie poziomu trudności
			++PoziomTrudnosci;
		}

	}

	return 0;
}
