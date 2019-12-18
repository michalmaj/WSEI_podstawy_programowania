#include <iostream>
#include <string>
#include <vector>

// przekazanie wskaźnika do funkcji

void zamien(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int l1{ 10 }, l2{ 99 };
	int* wsk{ nullptr };

	std::cout << "Wartosc pierwszej liczby to: " << l1 << std::endl;
	std::cout << "Wartosc drugiej liczby to: " << l2 << std::endl;

	std::cout << std::endl;

	zamien(&l1, &l2);
	std::cout << "Wartosc pierwszej liczby to: " << l1 << std::endl;
	std::cout << "Wartosc drugiej liczby to: " << l2 << std::endl;
	return 0;
}