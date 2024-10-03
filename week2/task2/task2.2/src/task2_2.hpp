#ifndef TASK2_2_HPP
#define TASK2_2_HPP

#include <string>

class BankAccount {
private:
    std::string accountNumber; // Номер счета
    double balance; // Приватное поле для хранения баланса

public:
    // Конструктор
    BankAccount(const std::string& accNum);
    
    // Метод для пополнения счета
    void deposit(double amount);
    
    // Метод для снятия суммы со счета
    void withdraw(double amount);
    
    // Метод для получения текущего баланса
    double getBalance() const;
};

#endif // TASK2_2_HPP
