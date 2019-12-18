#include <iostream>
#include <string>
#include <vector>

// przekazanie wskaźnika do funkcji

// to jest funkcja do wyśwetlania, więc dodanie const zapobiegnie:
void wyswietl(const std::vector <std::string>* pojazdy)
{
	// temu co tu się może stać:
	// (*pojazdy).at(0) = "Jelcz";
	for (auto nazwa : *pojazdy)
	{
		std::cout << nazwa << " ";
	}
	std::cout << std::endl;
}
int main()
{
	std::vector<std::string> auta{ "Mercedes","BMW","Audi" };
	wyswietl(&auta);
		
	return 0;
}