#include <iostream>
#include <string>

/*
	Tablice:
	- wielowymiarowe tablice
*/
int main()
{
	// arr [wiersze][kolumny]
	int arr[3][4]
	{
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};
	for (int i = 0; i < 3; i++)
	{
		std::cout << "[ ";
		for (int j = 0; j < 4; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "]";
		std::cout << std::endl;
	}
	return 0;
}
