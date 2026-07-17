#include "Adventurer.h"

#include "constants.h"
using namespace constants;
void Adventurer::updateRank() {
  if (reputation <= BeginnerRep) {
    rank = "Новичок";
  } else if (reputation >= AdventurerRepStart &&
             reputation <= AdventurerRepEnd) {
    rank = "Авантюрист";
  } else if (reputation >= GuardianRepStart && reputation <= GuardianRepEnd) {
    rank = "Страж";
  } else if (reputation >= VeteranRepStart && reputation <= VeteranRepEnd) {
    rank = "Ветеран";
  } else if (reputation >= HeroRepStart && reputation <= HeroRepEnd) {
    rank = "Герой";
  } else if (reputation >= RenownedHeroRepStart &&
             reputation <= RenownedHeroRepEnd) {
    rank = "Прославленный Герой";
  } else if (reputation >= LegendRep) {
    rank = "Легенда";
  }
}
