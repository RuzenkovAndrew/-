#include <iostream>
using namespace std;

int main()
{
    int height;
    cout << "Введите высоту пирамиды: ";
    cin >> height;

    for (int i = 1; i <= height; i++)
    {
        // Вывод пробелов перед первой пирамидой
        for (int j = 1; j <= height - i; j++)
        {
            cout << " ";
        }

        // Вывод первой пирамиды
        for (int j = 1; j <= i; j++)
        {
            cout << "#";
        }

        cout << " "; // Пробел между пирамидами

        // Вывод второй пирамиды
        for (int j = 1; j <= i; j++)
        {
            cout << "#";
        }

        cout << endl; // Переход на новую строку
    }
    return 0;
}

