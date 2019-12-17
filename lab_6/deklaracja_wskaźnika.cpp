#include <iostream>


int main()
{
	// deklaracja wskaźników - inicjalizacja na "wskazywanie nigdzie"
	// typ zmiennej *nazwa_wskaźnika {nullptr}

	int* wskaznik_na_calkowita{ nullptr };

	std::cout << wskaznik_na_calkowita << std::endl;

	return 0;
}