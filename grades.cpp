#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string>
#include <locale>

const int students = 19;
int grades[students];

float average_grade = 0.0;
std::wstring good_grades, bad_grades;

int main()
{
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");

	for (int i = 0; i < students; i++)
	{
		grades[i] = 1 + rand() % 6;
		std::wcout << i + 1 << ": " << grades[i] << ", \n";

		average_grade += grades[i];
		if (grades[i] >= 5) {
			good_grades += std::to_wstring(i + 1) + L", ";
		}
		if (grades[i] == 1) {
			bad_grades += std::to_wstring(i + 1) + L", ";
		}
	}

	std::wcout << L"\noceny powyżej piątki: " << good_grades;
	std::wcout << L"\noceny równe jeden: " << bad_grades;

	std::wcout << L"\n\nśrednia ocen: " << (float)(average_grade / students) << std::endl;
}