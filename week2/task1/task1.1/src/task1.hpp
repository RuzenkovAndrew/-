#ifndef TASK1_HPP
#define TASK1_HPP

#include <string>

class Task1 {
private:
  std::string name;
  int age;

public:
  // Конструктор по умолчанию
  Task1();

  // Конструктор с параметрами
  Task1(std::string name, int age);

  // Геттеры и сеттеры
  std::string getName();
  void setName(std::string name);
  int getAge();
  void setAge(int age);
};

#endif // TASK1.1_HPP
