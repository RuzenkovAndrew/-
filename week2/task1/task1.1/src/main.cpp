#include <iostream>
#include "task1.hpp"

int main() {
  // Создание экземпляров класса
  Task1 user1("Андрей", 22);
  Task1 user2("Кирилл", 31);
  Task1 user3; // Пользователь с использованием конструктора по умолчанию

  // Вывод информации о каждом пользователе
  std::cout << "Пользователь 1: " << user1.getName() << ", Возраст: " << user1.getAge() <<" лет" << std::endl;
  std::cout << "Пользователь 2: " << user2.getName() << ", Возраст: " << user2.getAge() << " лет" << std::endl;
  std::cout << "Пользователь 3: " << user3.getName() << ", Возраст: " << user3.getAge() << " лет" << std::endl;

return 0;
}
