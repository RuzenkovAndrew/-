#include "task1.hpp"

// Реализация методов
std::string Task1::getName() {
  return name;
}

void Task1::setName(std::string name) {
  this->name = name;
}

int Task1::getAge() {
  return age;
}

void Task1::setAge(int age) {
  this->age = age;
}

Task1::Task1() : name("Unknown"), age(0) {}

Task1::Task1(std::string name, int age) {
  this->name = name;
  this->age = age;
}

