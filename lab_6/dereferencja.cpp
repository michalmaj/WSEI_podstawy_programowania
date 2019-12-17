#include <iostream>
#include <string>
#include <vector>

// dereferencja
int main()
{
	// przykład
	int liczba{ 3 };	
	int* wsk{ &liczba }; //wskazuje na adres pamięci zmiennej liczba

	std::cout << *wsk << std::endl;

	*wsk = 10; // przypisanie wartości do wskaźnika

	std::cout << *wsk << std::endl; //10
	std::cout << liczba << std::endl; //10

	// przykład 2
	std::cout << std::endl;
	double wynik{ 23.4 };
	double srednia{ 13.2 };
	double* wsk2{ &wynik }; // wskazuje na adres pamięci zmiennej liczba

	std::cout << *wsk2 << std::endl;
	wsk2 = &srednia; // wskazanie nowego miejsca w pamięci
	std::cout << *wsk2 << std::endl;
	std::cout << srednia << std::endl;
	std::cout << wynik << std::endl;

	// przykład 3
	std::cout << std::endl;
	std::string imie{ "Michal" };
	std::string* wsk_imie{ &imie };
	std::cout << *wsk_imie << std::endl;

	imie = "Piotr";
	std::cout << *wsk_imie << std::endl;


	// przykład 4
	std::cout << std::endl;
	std::vector <std::string> nazwy{ "Mercedes", "BMW", "Audi" };
	std::vector <std::string>* wsk_nawzy{ nullptr };

	wsk_nawzy = &nazwy;

	std::cout << "Pierwsza Marka to: " << (*wsk_nawzy).at(0) << std::endl;
	std::cout << "Nazwy marek samochodow: ";
	for (auto nazwy : *wsk_nawzy)
	{
		std::cout << nazwy << " ";
	}
	std::cout << std::endl;
	return 0;
}