#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string>
#include <locale>

int min(int list[], int length) {
	int min_num = 101;
	for (int i = 0; i < length; i++)
	{
		if (list[i] < min_num) {
			min_num = list[i];
		}
	}
	return min_num;
}

int max(int list[], int length) {
	int max_num = 0;
	for (int i = 0; i < length; i++)
	{
		if (list[i] > max_num) {
			max_num = list[i];
		}
	}
	return max_num;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");

	const int num = 100;
	int tab[num];

	for (int i = 0; i < num; i++)
	{
		tab[i] = 1 + rand() % 101;
		std::cout << tab[i] << ", ";
	}

	std::wcout << L"\nnajmniejszą liczbą jest: " << min(tab, num);
	std::wcout << L"\nnajwiększą liczbą jest: " << max(tab, num);
}