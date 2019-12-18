#include <iostream>
#include <string>
#include <vector>

// const i wskaźnik
int main()
{
	int pierwsza_liczba{ 10 };
	int druga_liczba{ 99 };

	// wskaźnik na stałą
	// dane wskazywane przez "wskaźnik na stałą" nie mogą być modyfikowane
	const int* wsk{ &pierwsza_liczba };
	// *wsk = 23; // spowoduje błąd

	// ale const wsk może zmienić adres na który wskazuje
	wsk = &druga_liczba;

	
	/*===============================================================*/

	// stały wskaźnik
	// mże modyfikować dane, ale nie może wskazać na inny adres niż zainicjalizowany
	int* const wsk2{ &pierwsza_liczba };
	*wsk2 = 9;
	// wsk2 = &druga_liczba; // błąd


	/*===============================================================*/

	// stały wskaźnik na stałą
	/*
		dane wskazywane przez "wskaźnik na stałą" nie mogą być modyfikowane
		nie może wskazać na inny adres niż zainicjalizowany
	*/
	const int* const wsk3{ &pierwsza_liczba };
	
	// 2x błąd
	// wsk3 = &druga_liczba;
	// wsk3 = &druga_liczba;
	return 0;
}