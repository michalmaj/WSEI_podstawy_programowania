#include <iostream>
#include <string>

/*
	Tablice:
	- wszystkie elementy musza być tego samego typu
	- bezposredni dostęp do każdego elementu
	- stała wielkość - raz stowrzona ma zawsze taką samą wielkość
	- pamieć będzie przyznana od razu dla całej tablicy
	- indeks tablicy zaczyna sie od 0 (ostatni element to n-1)
*/
int main()
{
	int test_1[5]{1,2,3,4,5};
	int test_2[]{ 1,2,3,4,5 };
	int test_3[5]{ 0 };
	int test_4[5]{100};

	const int dni_w_roku{ 365 };
	double naj_temp[dni_w_roku]{ 0 };
	for (int i = 0; i < dni_w_roku; i++) {
		naj_temp[i] = 1;
		std::cout << i+1 << " to: " << naj_temp[i] << std::endl;
	}
	

	return 0;
}
