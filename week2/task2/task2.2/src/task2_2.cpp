#include "task2_2.hpp"
#include <iostream>

// Конструктор
BankAccount::BankAccount(const std::string& accNum) : accountNumber(accNum), balance(0.0) {}

// Метод для пополнения счета
void BankAccount::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        std::cout << "На счет " << accountNumber << " внесено " << amount 
                  << ". Текущий баланс: " << balance << ".\n";
    } else {
        std::cout << "Сумма для пополнения должна быть положительной.\n";
    }
}

// Метод для снятия суммы со счета
void BankAccount::withdraw(double amount) {
    if (amount > 0) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Со счета " << accountNumber << " снято " << amount 
                      << ". Текущий баланс: " << balance << ".\n";
        } else {
            std::cout << "Недостаточно средств на счете.\n";
        }
    } else {
        std::cout << "Сумма для снятия должна быть положительной.\n";
    }
}

// Метод для получения текущего баланса
double BankAccount::getBalance() const {
    return balance;
}
