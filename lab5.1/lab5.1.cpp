// Lab 5_1.cpp
// Варіант 6
// Обчислення значення виразу з використанням користувацької функції

#include <iostream>
#include <cmath>

using namespace std;

// Прототип допоміжної функції h(x, y)
double h(const double x, const double y);

int main()
{
    double s, t;

    // Введення початкових даних
    cout << "s = "; cin >> s;
    cout << "t = "; cin >> t;

    // Обчислення виразу за формулою Варіанту 6
    double c = (h(s * s, t * t) + pow(h(s + t, 1), 2)) / (1 + pow(h(s * t, 2), 2));

    // Виведення результату
    cout << "c = " << c << endl;

    return 0;
}

// Визначення допоміжної функції h(x, y)
// Обчислює h(x, y) = (x * y) / (1 + x^2 * y^2)
double h(const double x, const double y)
{
    return (x * y) / (1 + x * x * y * y);
}