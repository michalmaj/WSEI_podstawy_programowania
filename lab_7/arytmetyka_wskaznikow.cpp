#include <iostream>
#include <string>
#include <vector>

// arytmetyka wskaźników
int main()
{
	// przykład pierwszy
	int wyniki[]{ 10,20,30,40,-1 };
	int* wsk_wynik{ wyniki };

	while (*wsk_wynik != -1) // skończy pętle, gdy trafi na -1
	{
		std::cout << *wsk_wynik << std::endl;
		wsk_wynik++;
	}
// rozszerzenie dla przykładu pierwszego
	std::cout << std::endl;
	wsk_wynik = wyniki;
	while (*wsk_wynik != -1) // skończy pętle, gdy trafi na -1
	{
		std::cout << *wsk_wynik++ << std::endl; // * oraz ++ mają taką samą wagę, więc wykonuje się od lewej do prawej
	}


	// przykład drugi
	std::cout << std::endl;
	std::string imie1{ "Michal" };
	std::string imie2{ "Michal" };

	std::string* wsk_imie1{ &imie1 };
	std::string* wsk_imie2{ &imie2 };
	std::string* wsk_imie3{ &imie1 };

	std::cout << std::boolalpha;

	std::cout << (wsk_imie1 == wsk_imie2) << std::endl;
	std::cout << (wsk_imie1 == wsk_imie3) << std::endl;

	std::cout << (*wsk_imie1 == *wsk_imie2) << std::endl;
	std::cout << (*wsk_imie1 == *wsk_imie3) << std::endl;


	// przyklad trzeci
	std::cout << std::endl;
	char imie[]{ "Michal" };

	char* imie_wsk1{ nullptr };
	char* imie_wsk2{ nullptr };

	imie_wsk1 = &imie[0]; // M
	imie_wsk2 = &imie[3]; // h

	std::cout << "W imieniu " << imie << ", litera " << *imie_wsk1 << " jest ";
	std::cout << (imie_wsk2 - imie_wsk1) << " miejsca od litery ";
	std::cout << *imie_wsk2 << std::endl;
	return 0;
}