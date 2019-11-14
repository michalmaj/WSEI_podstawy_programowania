 porównywanie wartości
#include iostream

int main()
{
	bool test_rownosci{ false };
	bool test_nierownosci{ false };

	int liczba1{}, liczba2{};

	 do zwracania true lub false zmiast 10
	stdcout  stdboolalpha;
	 stdcout  stdnoboolalpha; odwoalnie powyzszego

	stdcout  Podaj dwie liczby oddzielone spacja ;
	stdcin  liczba1  liczba2;

	test_rownosci = (liczba1 == liczba2);
	test_nierownosci = (liczba1 != liczba2);

	stdcout  Test rownosci   test_rownosci  stdendl;
	stdcout  Test nierownosci   test_nierownosci  stdendl;

	stdcout  ==============================================n;

	 znaki
	char litera1{}, litera2{};
	stdcout  Podaj dwie litery oddzielone spacja ;
	stdcin  litera1  litera2;
	test_rownosci = (litera1 == litera2);
	test_nierownosci = (litera1 != litera2);
	stdcout  Test rownosci   test_rownosci  stdendl;
	stdcout  Test nierownosci   test_nierownosci  stdendl;


	stdcout  ==============================================n;

	 liczby zmienno przecinkowe
	double zmienno1{}, zmienno2{};
	stdcout  Podaj dwie liczby zmiennoprzecinkowe oddzielone spacja ;
	 test dla 2.0 i 1.99999999999999999999999999
	stdcin  zmienno1  zmienno2;
	test_rownosci = (zmienno1 == zmienno2);
	test_nierownosci = (zmienno1 != zmienno2);
	 błąd ponieważ przechowywanie liczb w pamięci
	stdcout  Test rownosci   test_rownosci  stdendl;
	stdcout  Test nierownosci   test_nierownosci  stdendl;


	stdcout  ==============================================n;

	 całkowita i zmiennoprzecinkowa
	int liczba3{};
	double zmienno3{};
	stdcout  Podaj dwie liczby oddzielone spacja ;
	stdcin  liczba3  zmienno3;
	test_rownosci = (liczba3 == zmienno3);
	test_nierownosci = (liczba3 != zmienno3);
	stdcout  Test rownosci   test_rownosci  stdendl;
	stdcout  Test nierownosci   test_nierownosci  stdendl;
	return 0;
}
