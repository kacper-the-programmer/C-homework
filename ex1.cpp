#include <iostream>
#include <locale>

float distance, fuel_consumption, fuel_price, total_fuel, total_cost;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    std::wcout << L"\nPodaj przejechaną odległość w kilometrach > ";
    std::cin >> distance;

    std::wcout << L"Podaj spalanie paliwa w litrach na 100 km > ";
    std::cin >> fuel_consumption;

    std::wcout << L"Podaj cenę paliwa za litr > ";
    std::cin >> fuel_price;

    total_fuel = (fuel_consumption * distance) / 100;
    total_cost = total_fuel * fuel_price;

    std::wcout << L"Zużycie paliwa na podanej trasie: " << total_fuel << L" litrów\n";
    std::wcout << L"Całkowity koszt paliwa: " << total_cost << L" zł\n\n";

    return 0;
}
