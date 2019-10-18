#include <iostream>
#include <locale.h>

// funkcja main - tylko jedna na program
int main()
{
    // Wstep do Gry
    std::cout << "Jestes tajnym agentem, ktory wlamuje sie do strzezonej serwerowni";
    std::cout << std::endl;
    std::cout << "Musisz podac wlasciwe haslo, zeby przejsc dalej..." << std::endl;
        

    /* zmienne powinny posiadac odpowiedznie nazwy
       powinny zaczynać się od podkreślenia lub litery
       nie mogą być też jak zerezerwowane nazwy
       dobrze podpisana zmienna samodokumentuje kod
       Najnowszy standard zakłada: UpperCalemCase
    */
    const int KodA = 4;
    const int KodB = 3;
    const int KodC = 2;
    
    // suma zmiennych
    const int KodSuma = KodA + KodB + KodC;
    // iloczyn zmiennych
    const int KodIloczyn = KodA * KodB * KodC;
    
    std::cout << std::endl;
    std::cout << "+ W kodzie znajduja sie trzy zmienne" << std::endl;
    std::cout << "+ Sumuja sie do: " << KodSuma << std::endl;
    std::cout << "+ Mnoza sie do: " << KodIloczyn << std::endl;

    // zadeklarowanie zmiennych bez inicjalizacji
    int StrzalA, StrzalB, StrzalC;
	
    // Wczytanie kolejnych zmiennych
    std::cin >> StrzalA;
    std::cin >> StrzalB;
    std::cin >> StrzalC;
    
    int StrzalSuma = StrzalA + StrzalB + StrzalC;
    int Strzalloczyn = StrzalA * StrzalB * StrzalC;

    /*
    Blok if dla porównainia
    zadanej sumy i iloczynu
    z sumą i iloczynem podamym przez gracza
    */
	// == służy do porównainia dwóch zmiennych
	// && jest symbolem operacji logicznej. W tym przypadku to iloczyn logiczny - wszystkie wartości muszą być prawdziwe, aby została zwrócona prawda
   if (StrzalSuma == KodSuma && Strzalloczyn == KodIloczyn)
   {
       std::cout << "Zwyciestwo!" << std::endl;
   }
   else
   {
       std::cout << "Przegrana ;(" << std::endl;
   }
   

    return 0;
}