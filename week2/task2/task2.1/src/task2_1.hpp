#ifndef TASK2_1_HPP
#define TASK2_1_HPP

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Student {
private:
  string name;
  tm birthDate;
  string group;
  int studentId;
  double averageScore;

public:
  // Конструктор
  Student(string n, tm bDate, string grp, int sId, double avgScore);

  // Геттеры
  string getName() const;
  tm getBirthDate() const;
  string getGroup() const;
  int getStudentId() const;
  double getAverageScore() const;

  // Сеттеры
  void setName(const string& n);
  void setBirthDate(const tm& bDate);
  void setGroup(const string& grp);
  void setStudentId(int sId);
  void setAverageScore(double avgScore);

  // Метод для расчета возраста
  int getAge() const;

  // Метод для вывода информации о студенте
  string toString() const;

  // Метод для проверки, является ли студент отличником
  bool isExcellentStudent() const;
};

#endif // TASK2_1_HPP
