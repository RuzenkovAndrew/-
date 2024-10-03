#ifndef MACHINE_HPP
#define MACHINE_HPP

#include <string>

class Engine {
private:
  int power; // Мощность двигателя

public:
  // Конструктор двигателя
  Engine(int enginePower) : power(enginePower) {}

  // Метод для получения мощности двигателя
  int getPower() const { return power; }
};

class Passenger {
private:
  std::string name; // Имя пассажира

public:
  // Конструктор пассажира
  Passenger(std::string passengerName) : name(passengerName) {}

  // Метод для получения имени пассажира
  std::string getName() const { return name; }
};

class Car {
private:
  std::string model; // Модель автомобиля
  Engine engine; // Двигатель автомобиля
  Passenger* passenger1; // Первый пассажир
  Passenger* passenger2; // Второй пассажир

public:
  // Конструктор автомобиля
  Car(std::string carModel, Engine carEngine) : model(carModel), engine(carEngine), passenger1(nullptr), passenger2(nullptr) {}

  // Метод для добавления пассажира
  void addPassenger(Passenger* passenger);

  // Метод для удаления пассажира
  void removePassenger(Passenger* passenger);

  // Метод для вывода информации об автомобиле
  void displayInfo() const;
};

#endif // MACHINE_HPP
