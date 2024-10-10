#include <iostream>
using namespace std;

int main() {
    int year, month;
    cout << "Введите год: ";
    cin >> year;
    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    int daysInMonth;

    if (month == 2) // Февраль
    {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            daysInMonth = 29;
        } else {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) // Месяцы с 30 днями
    {
        daysInMonth = 30;
    }
    else // Остальные месяцы (с 31 днем)
    {
        daysInMonth = 31;
    }

    cout << "В " << month << " месяце " << year << " года " << daysInMonth << " дней." << endl;

    return 0;
}

