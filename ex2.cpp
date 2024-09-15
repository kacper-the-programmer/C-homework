#include <iostream>
#include <locale>

float distance, speed;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    std::wcout << L"\npodaj dystans w kilometrach > ";
    std::cin >> distance;

    std::wcout << L"podaj prędkość w kilometrach na godzine > ";
    std::cin >> speed;

    std::wcout << L"podróż będzie trwała: " << distance / speed << "h \n\n";
    return 0;
}
