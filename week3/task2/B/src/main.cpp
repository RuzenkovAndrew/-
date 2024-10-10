#include <iostream>
#include <cmath> 
using namespace std;

double heron_sqrt(double number, double epsilon = 1e-6)
{
    double guess = 1.0; // Начальное приближение

    while (abs(guess * guess - number) > epsilon) // Формула Герона
    {
        guess = (guess + number / guess) / 2; // Обновление предположения
    }

    return guess;
}

int main()
{
    double number;
    cout << "Введите число: ";
    cin >> number;

    double sqrt = heron_sqrt(number);
    cout << "Квадратный корень из " << number << " равен " << sqrt << endl;

    return 0;
}

