#include "Adventurer.h"

void Adventurer::updateRank()
{
	if (0 <= reputation <= 49) {
		rank = "Новичок";
	}
	else if (50 <= reputation <= 99) {
		rank = "Авантюрист";
	}
	else if (100 <= reputation <= 199) {
		rank = "Страж";
	}
	else if (200 <= reputation <= 299) {
		rank = "Ветеран";
	}
	else if (300 <= reputation <= 349) {
		rank = "Герой";
	}
	else if (350 <= reputation <= 399) {
		rank = "Прославленный Герой";
	}
	else if (reputation>=400) {
		rank = "Легенда";
	}
}
