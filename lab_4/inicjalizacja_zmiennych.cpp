#include <iostream>
#include <string>
/*
	Inicjalizacja zmiennych w standardzie C++14 przy pomocy nawiasów klamrowych {}
	Przykład:
	int nazwa_zmiennej {5}; // deklaracja zmiennej i przypisanie jej wartości
*/
int main()
{
	// Nowy sposób inicjalizacji
	char MojZnak{ 'M' };
	std::cout << "Moj znak to: " << MojZnak << std::endl;

	unsigned short MojWynik{ 5 };
	std::cout << "Moj wynik to: " << MojWynik << std::endl;

	long IloscMiszkancowPolska {36000000};
	std::cout << "Liczba ludzi w Polsce: " << IloscMiszkancowPolska << std::endl;
	
	// dlaczego {} w inicjalizacji niż =?
	long LudziNaZiemi_1 = 7600000000;
	// Co tu się stało?
	std::cout << "Ilosc miszkancow ziemi to: " << LudziNaZiemi_1 << std::endl;
	
	// Błąd kompilacji, więc jest to bezpieczna wersja
	/*long LudziNaZiemi_2 {7600000000};
	std::cout << "Ilosc miszkancow ziemi to: " << LudziNaZiemi_2 << std::endl;*/

	// Można tak
	long long LudziNaZiemi_3 = 7600000000;
	std::cout << "Ilosc miszkancow ziemi to: " << LudziNaZiemi_3 << std::endl;

	// Wersja zgodna z C++14 - do tego w zpisie można stosować '
	long long LudziNaZiemi_4{ 7'600'000'000 };
	std::cout << "Ilosc miszkancow ziemi to: " << LudziNaZiemi_4 << std::endl;


	return 0;
}