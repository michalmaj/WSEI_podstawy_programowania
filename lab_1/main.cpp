// dodanie dyrektywy preprocesora
// instrukcja dla kompilera, dodaje bibliotekę przed kompilacją
#include <iostream>

// funkcja main - tylko jedna na program
int main()
{
    // std to przestrzeń nazw
    // można również ją dodać w formie: using namespace std;
    // :: operator zasięgu
    std::cout << "Witaj Swiecie!" << std:: endl;

    // Wstep do Gry
    /* Wyświetlanie w kolejnej linii można wykonać przy użyciu:
    - endl z przestrzeni nazw std
    - poprzez dodanie \n
    */
    std::cout << "Jestes tajnym agentem, ktory wlamuje sie do strzezonej serwerowni";
    std::cout << std::endl;
    std::cout << "Musisz podac wlasciwe haslo, zeby przejsc dalej...";
    std::cout << std::endl;
    
    // zmienne
    // stosowane są do przechowywania danych
    // zmienne trzeba najpierw zadeklarowac - rezerwuje to miejsce w pamięci

    // typ zmiennej, nazwa, inicjalizacja
    int a = 4;

    std::cout << a << std::endl;
    int b = 3;
    int c = 2;
    std::cout << a + b + c << std::endl;

    // suma zmiennych
	int suma = a + b + c;
    std::cout << suma << std::endl;

    // iloczyn zmiennych
    int iloczyn = a * b * c;
    std::cout << iloczyn << std::endl;

    // iloraz zmiennych
    // w tym przypadku, dla uzyskania poprawnego wyniku, konieczne jest rzutowanie z int na float
    float iloraz = float(a) / float(b);
    std::cout << iloraz << std::endl;

    // zmienne można zmieniać w kodzie
    // ale tylko, gdy zostały wcześniej zadeklarowane

    
    return 0;
}