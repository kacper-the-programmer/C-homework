#include <iostream>
#include <locale>
#include <Windows.h>
#include <string>

int lotto[6];
std::string ticket;
std::string tickets;

int main()
{
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");

	std::wcout << L"opstaw losy (np. 1,2,3,4,5,6): ";
	std::cin >> ticket;
	ticket += ",";

	for (int i = 0; i < 6; i++)
	{
		int number = 6 + rand() % 50;
		
		for (int y = 0; y < 6; y++)
		{
			if (number != lotto[y]) {

			}
			else {
				number = 6 + rand() % 50;
			}
		}
		lotto[i] = number;
		tickets += std::to_string(number) + ",";
		Sleep(500);
		std::cout << lotto[i] << ",\n";
	}

	if (ticket == tickets) {
		std::wcout << L"\nWygrałeś !";
	}
	else {
		std::wcout << L"\nPrzegrałeś.";
	}
}
