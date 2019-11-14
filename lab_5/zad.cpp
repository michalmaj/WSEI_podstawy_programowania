// operacje logiczne
#include <iostream>

int main()
{
	int liczba{};
	constexpr int mniejsza{ 10 };
	constexpr int wieksza{ 20 };

	std::cout << std::boolalpha;
	bool czy_w_granicy{ false };
	while (true)
	{		
		std::cout << "Wprowadz zmienna, ktora jest mniejsza niz " << wieksza;
		std::cout << ", oraz jest wieksza od: " << mniejsza << std::endl;
		std::cin >> liczba;
		if (!std::cin)
		{
			std::cout << "Nieznany imput!\n";
			std::cin.clear();
			std::cin.ignore();
			continue;

		}
		czy_w_granicy = (liczba > mniejsza&& liczba < wieksza);
		if (czy_w_granicy == true)
		{
			std::cout << "Twoja liczba: " << liczba << " jest OK\n";
			break;
		}
		else
		{
			std::cout << "Bledna liczba!\n";
			if (liczba == mniejsza || liczba == wieksza)
			{
				std::cout << "Podana liczba powinna nalezec do niedomknietego";
				std::cout << " zbioru liczb (10,20)\n";
			}
			else
			{
				std::cout << "Podana liczba jest poza zakresem\n";
			}
		}
	/*	std::cin.clear();
		std::cin.ignore();*/
	}

	std::cout << czy_w_granicy << std::endl;
	return 0;
}
