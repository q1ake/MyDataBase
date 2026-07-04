#include "register.h"

#include <fstream>
#include <iostream>

#include "Adventurer.h"
void Register() {
  std::string name;
  std::string surname;
  std::string role;
  int level = 0, reputation = 0, id = 0;
  Adventurer enemy(id, name, surname, role, level, reputation);
  std::ofstream fout;
  fout.open("Adventure.txt");
  std::cout << "Введите Id: ";
  std::cin >> enemy.id;
  std::cout << "Введите имя: ";
  std::cin >> enemy.name;
  std::cout << "Введите Фамилию: ";
  std::cin >> enemy.surname;
  std::cout << "Введите Роль: ";
  std::cin >> enemy.role;
  std::cout << "Введите Уровень: ";
  std::cin >> enemy.level;
  std::cout << "Введите репутацию: ";
  std::cin >> enemy.reputation;
}
