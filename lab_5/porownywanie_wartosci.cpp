// porównywanie wartości
#include <iostream>

int main()
{
	// liczby całkowte
	bool test_rownosci{ false };
	bool test_nierownosci{ false };

	int liczba1{}, liczba2{};

	// do zwracania true lub false zmiast 1/0
	std::cout << std::boolalpha;
	// std::cout << std::noboolalpha; //odwoalnie powyzszego

	std::cout << "Podaj dwie liczby oddzielone spacja: ";
	std::cin >> liczba1 >> liczba2;

	test_rownosci = (liczba1 == liczba2);
	test_nierownosci = (liczba1 != liczba2);

	std::cout << "Test rownosci: " << test_rownosci << std::endl;
	std::cout << "Test nierownosci: " << test_nierownosci << std::endl;

	std::cout << "==============================================\n";
	
	// znaki
	char litera1{}, litera2{};
	std::cout << "Podaj dwie litery oddzielone spacja: ";
	std::cin >> litera1 >> litera2;
	test_rownosci = (litera1 == litera2);
	test_nierownosci = (litera1 != litera2);
	std::cout << "Test rownosci: " << test_rownosci << std::endl;
	std::cout << "Test nierownosci: " << test_nierownosci << std::endl;

	
	std::cout << "==============================================\n";

	// liczby zmienno przecinkowe
	double zmienno1{}, zmienno2{};
	std::cout << "Podaj dwie liczby zmiennoprzecinkowe oddzielone spacja: ";
	// test dla 2.0 i 1.99999999999999999999999999
	std::cin >> zmienno1 >> zmienno2;
	test_rownosci = (zmienno1 == zmienno2);
	test_nierownosci = (zmienno1 != zmienno2);
	// błąd ponieważ przechowywanie liczb w pamięci
	std::cout << "Test rownosci: " << test_rownosci << std::endl;
	std::cout << "Test nierownosci: " << test_nierownosci << std::endl;


	std::cout << "==============================================\n";

	// całkowita i zmiennoprzecinkowa
	int liczba3{};
	double zmienno3{};
	std::cout << "Podaj dwie liczby oddzielone spacja: ";
	std::cin >> liczba3 >> zmienno3;
	test_rownosci = (liczba3 == zmienno3);
	test_nierownosci = (liczba3 != zmienno3);
	std::cout << "Test rownosci: " << test_rownosci << std::endl;
	std::cout << "Test nierownosci: " << test_nierownosci << std::endl;
	return 0;
}
