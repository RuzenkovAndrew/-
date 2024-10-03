#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include <string>

using namespace std;

class Author {
private:
  string name;
  int birthYear;

public:
  // Конструктор
  Author(const string& name, int birthYear);

  // Метод для получения имени автора
  string getName() const;

  // Метод для установки имени автора
  void setName(const string& name);

  // Метод для получения года рождения автора
  int getBirthYear() const;

  // Метод для установки года рождения автора
  void setBirthYear(int birthYear);
};

class Book {
private:
  Author author;

public:
  // Конструктор
  Book(const Author& author);

  // Метод для получения информации об авторе
  Author getAuthor() const;

  // Метод для установки нового автора
  void setAuthor(const Author& author);
};

#endif // AUTHOR_HPP
