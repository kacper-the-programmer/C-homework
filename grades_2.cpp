#include <iostream>
#include <random>
#include <ctime>
#include <cstdlib>
#include <string>
#include <locale>

void grades(int students_num, int tab[]) {
	float average_grade = 0.0;
	std::wstring good_grades, bad_grades;

	for (int i = 0; i < students_num; i++)
	{
		tab[i] = 1 + rand() % 6;
		std::wcout << i + 1 << ": " << tab[i] << ", \n";

		average_grade += tab[i];
		if (tab[i] >= 5) {
			good_grades += std::to_wstring(i + 1) + L", ";
		}
		if (tab[i] == 1) {
			bad_grades += std::to_wstring(i + 1) + L", ";
		}
	}

	std::wcout << L"\noceny powyżej piątki: " << good_grades;
	std::wcout << L"\noceny równe jeden: " << bad_grades;

	std::wcout << L"\n\nśrednia ocen: " << (float)(average_grade / students_num) << std::endl;
}

int main()
{
	srand(time(NULL));
	setlocale(LC_CTYPE, "Polish");

	const int students = 19;
	int grades_tab[students];

	grades(students, grades_tab);

}