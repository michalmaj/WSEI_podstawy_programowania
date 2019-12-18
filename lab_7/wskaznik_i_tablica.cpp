#include <iostream>
#include <string>
#include <vector>

// przekazanie wskaźnika do funkcji

void wyswietl(int* tablica, int koniec)
{
	while (*tablica != koniec)
	{
		// wyświtli wartość, następnie przejdzie do kolejnego adresu w tablicy
		std::cout << *tablica++ << " ";
	}
	std::cout << std::endl;
}
int main()
{
	int wyniki[]{ 2,3,4,5,-1 };
	wyswietl(wyniki, -1);
		
	return 0;
}