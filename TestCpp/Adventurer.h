#pragma once
#include <string>
class Adventurer {
 private:
  int id;
  std::string name;
  std::string surname;
  std::string role;
  int level;
  int reputation;
  std::string rank;

 public:
  Adventurer()
      : id(0),
        name(""),
        surname(""),
        role(""),
        level(1),
        reputation(0),
        rank("Новичок") {}
  Adventurer(int id, std::string name, std::string surname, std::string role,
             int level, int reputation)
      : id(id),
        name(name),
        surname(surname),
        role(role),
        level(level),
        reputation(reputation) {}
};
