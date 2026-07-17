#include "register.h"

#include <fstream>
#include <iostream>

#include "Adventurer.h"
void Register() {
  std::string name;
  std::string surname;
  std::string role;
  int level, reputation, id;
  std::ofstream fout;
line:
  std::cout << "Введите id: ";
  std::cin >> id;
  if (id < 0) {
    std::cout << "Введите ID больше 0 " << std::endl;
    goto line;
  }
  if (UniqueId(id) == true) {
    std::cout << "Данный ID занят. Выберите другой" << std::endl;
    goto line;
  }
  std::cout << "Введите имя(Строка): ";
  std::cin >> name;
  std::cout << "Введите Фамилию(Строка): ";
  std::cin >> surname;
  std::cout << "Введите Роль(Строка): ";
  std::cin >> role;
  std::cout << "Введите Уровень(Число): ";
  std::cin >> level;
  std::cout << "Введите репутацию(Число): ";
  std::cin >> reputation;
  Adventurer enemy(id, name, surname, role, level, reputation);
  fout.open("Adventure.txt", std::ios::app);
  if (fout.is_open()) {
    fout << id << " " << name << " " << surname << " " << role << " " << level
         << " " << reputation << " " << enemy.GetRank() << "\n";
    fout.close();
    std::cout << "\nАвантюрист успешно зарегистрирован!\n";
  }
}
bool UniqueId(int id) {
  std::ifstream fout("Adventure.txt");
  if (!fout.is_open()) {
    return false;
  }
  int exsiting_id;
  std::string name;
  std::string surname;
  std::string role;
  int level;
  int reputation;
  std::string rank;
  while (fout >> exsiting_id >> name >> surname >> role >> level >>
         reputation >> rank) {
    if (exsiting_id == id) {
      return true;
    }
  }
  return false;
}
