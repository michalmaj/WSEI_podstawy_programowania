#include <iostream>
#include <string>
#include <vector>

/*
	Stos (stack):
	liniowa struktura danych, w której dane dokładane są na wierzch stosu i z wierzchołka stosu są pobierane
	(bufor typu LIFO, Last In, First Out; ostatni na wejściu, pierwszy na wyjściu).
	Ideę stosu danych można zilustrować jako stos położonych jedna na drugiej książek,
	nowy egzemplarz kładzie się na wierzch stosu i z wierzchu stosu zdejmuje się kolejne egzemplarze.

	Sterta (heap):
	struktura danych oparta na drzewie,	w której wartości potomków węzła są w stałej relacji z wartością rodzica
	(na przykład wartość rodzica jest nie mniejsza niż wartości jego potomka).
	Przechowywane tam są:
	dynamicznie tworzone struktury danych;
	dynamicznie przydzielane obszary pamięci;
*/
int main()
{
	// przykład new i delete
	int* wsk{ nullptr };
	wsk = new int; // alokacja na stercie
	std::cout << wsk << std::endl;
	std::cout << *wsk << std::endl; // śmieci

	*wsk = 7;
	std::cout << *wsk << std::endl;

	delete wsk; // należy po sobie posprzątać



	// zrozuieć tablice
	int wyniki[]{ 3,4,5 };
	std::cout << "Adres pierwszej wartosci: " << wyniki << std::endl;

	int* wsk_wyniki{ wyniki };
	std::cout << "Adres pierwszej wartosci dla wskaznika: " << wsk_wyniki << std::endl;

	std::cout << "\n" << std::endl;
	std::cout << wyniki[0] << std::endl;
	std::cout << wyniki[1] << std::endl;
	std::cout << wyniki[2] << std::endl;

	std::cout << "\n" << std::endl;
	std::cout << wsk_wyniki[0] << std::endl;
	std::cout << wsk_wyniki[1] << std::endl;
	std::cout << wsk_wyniki[2] << std::endl;

	std::cout << "\n" << std::endl;
	std::cout << *wyniki << std::endl;
	std::cout << *(wyniki+1) << std::endl;
	std::cout << *(wyniki+2) << std::endl;

	std::cout << "\n" << std::endl;
	std::cout << *wsk_wyniki << std::endl;
	std::cout << *(wsk_wyniki + 1) << std::endl;
	std::cout << *(wsk_wyniki + 2) << std::endl;
	// przykład dynamiczna tablica
	int* wsk_tab{ nullptr };
	int rozmiar{};

	std::cout << "Jak duza ma byc tablica?: ";
	std::cin >> rozmiar;

	wsk_tab = new int[rozmiar]; // alokacja tablicy na stercie



	delete[] wsk_tab; // usunięcie zajętej pamięci po tablicy
	return 0;
}