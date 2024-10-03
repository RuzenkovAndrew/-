#include <iostream>
#include "author.hpp"

using namespace std;

// Реализация методов класса Author
Author::Author(const string& name, int birthYear)
  : name(name), birthYear(birthYear) {}

string Author::getName() const {
  return name;
}

void Author::setName(const string& name) {
  this->name = name;
}

int Author::getBirthYear() const {
  return birthYear;
}

void Author::setBirthYear(int birthYear) {
  this->birthYear = birthYear;
}

// Реализация методов класса Book
Book::Book(const Author& author) : author(author) {}

Author Book::getAuthor() const {
  return author;
}

void Book::setAuthor(const Author& author) {
  this->author = author;
}

int main() {
  // Пример использования
  Author author("Лев Толстой", 1828);
  Book book(author);

  cout << "Автор: " << book.getAuthor().getName() << endl;
  cout << "Год рождения: " << book.getAuthor().getBirthYear() << endl;

  return 0;
}
