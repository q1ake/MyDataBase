#pragma once
#include <string>

#include "register.h"
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
  void updateRank();
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
        reputation(reputation) {
    updateRank();
  }
  std::string GetName() const { return name; }
  int GetId() const { return id; }
  std::string GetSurname() const { return surname; }
  std::string GetRole() const { return role; }
  int GetLevel() const { return level; }
  int GetReputation() const { return reputation; }
  std::string GetRank() const { return rank; }
  friend void Register();
};
