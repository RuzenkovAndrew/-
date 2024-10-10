#include <iostream>
using namespace std;

int main()
{
    int arr;
    cout << "Введите размер массива: ";
    cin >> arr;

    int numbers[arr];
    cout << "Введите элементы массива: ";
    for (int i = 0; i < arr; i++)
    {
        cin >> numbers[i];
    }

    int maxElement = numbers[0]; // Предполагаем, что первый элемент - максимальный
    int count = 1; // Количество максимальных элементов, включая первый

    for (int i = 1; i < arr; i++)
    {
        if (numbers[i] > maxElement)
        {
            maxElement = numbers[i];
            count = 1; // Сбрасываем счетчик, так как найден новый максимальный
        }
        else if (numbers[i] == maxElement)
        {
            count++; // Увеличиваем счетчик, если найден элемент, равный максимальному
        }
    }

    cout << "Наибольший элемент: " << maxElement << endl;
    cout << "Количество таких же элементов: " << count << endl;

    return 0;
}
