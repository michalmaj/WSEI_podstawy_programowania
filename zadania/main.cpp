#include <iostream>
#include <string>

// zadanie przepisać kod, tak aby nie zawierał "Magic numbers"
// koszt usługi czyszczenia to: 60 zł, a podatek to 7%, cena może się zmienić co 30 dni
int main()
{
	std::cout << "Witaj w serwisie czyszczacym laptopy!" << std::endl;
	std::wcout << "\nIle laptopow chcialbys wyczyscic?: ";

	int IloscLaptopow{ 0 };
	std::cin >> IloscLaptopow;

	std::cout << "\nPrzewidywana cena za usluge:" << std::endl;
	std::cout << "Liczba laptopow: " << IloscLaptopow << std::endl;
	std::cout << "Cena za laptop: " << 60 << " zl" << std::endl;
	std::cout << "Cena: " << 60 * IloscLaptopow << std::endl;
	std::cout << "Podatek: " << 60 * IloscLaptopow * 0.07 << std::endl;
	std::cout << "======================================" << std::endl;
	std::cout << "Calkowity koszt: " << (60 * IloscLaptopow) + (60 * IloscLaptopow * 0.07) << std::endl;
	std::cout << "Cena moze ulec zmianie po " << 30 << " dniach!" << std::endl;
	

	return 0;
}