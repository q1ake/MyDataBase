#include "Adventurer.h"

void Adventurer::updateRank() {
  if (reputation <= 49) {
    rank = "Новичок";
  } else if (reputation >= 50 && reputation <= 99) {
    rank = "Авантюрист";
  } else if (reputation >= 100 && reputation <= 199) {
    rank = "Страж";
  } else if (reputation >= 200 && reputation <= 299) {
    rank = "Ветеран";
  } else if (reputation >= 300 && reputation <= 349) {
    rank = "Герой";
  } else if (reputation >= 350 && reputation <= 399) {
    rank = "Прославленный Герой";
  } else if (reputation >= 400) {
    rank = "Легенда";
  }
}
