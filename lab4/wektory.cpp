#include <iostream>
// należy dodać dyrektywę wketora
#include <vector>

/*
	Wektory:
	- należą do STL
	- są dynamiczne: moga byc rozszerzane w czaie działania programu
	- posiadają wbudowane funkcje: sortowanie, odwracanie, szukanie etc.
	- sprawdzają swój rozmiar
*/
int main()
{
	// wektory bez inicjalizacji
	std::vector <char> samogloski;
	std::vector <int> wyniki;
	
	// inicjalizacja wektora
	std::vector <float> liczby{ 1,2,3 };
	std::cout << liczby[0] << std::endl;

	std::cout << std::endl;
	// wektor, typ, nazwa, (ilość, wypełnij zerami)
	std::vector <double> temperatura(4, 0);

	for (int i = 0; i < temperatura.size(); i++)
	{
		std::cout << temperatura[i] << std::endl;
	}
	return 0;
}
