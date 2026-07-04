#include "menu.h"

#include <windows.h>

#include "constants.h"
using namespace constants;
#include <iostream>
void menu() {
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);
label:
  std::cout << std::endl
            << "====== ГИЛЬДИЯ АВАНТЮРИСТОВ ======" << std::endl
            << std::endl
            << std::endl;
  std::cout << "Выберите необходимое действие:" << std::endl
            << "1. Зарегистрировать нового пользователя" << std::endl
            << "2. Обзор записей" << std::endl
            << "3. Поиск персонажа" << std::endl
            << "4. Исключение из гильдии" << std::endl
            << "5. Начисление репутации" << std::endl
            << std::endl;
  int choice;
  std::cout << "Ваш выбор: ";
  std::cin >> choice;
  switch (choice) {
    case ChooseOne: {
      std::cout << "Вы выбрали число 1" << std::endl;
      break;
    }
    case ChooseTwo: {
      std::cout << "Вы выбрали число 2" << std::endl;
      break;
    }
    case ChooseThree: {
      std::cout << "Вы выбрали число 3" << std::endl;
      break;
    }
    case ChooseFour: {
      std::cout << "Вы выбрали число 4" << std::endl;
      break;
    }
    case ChooseFive: {
      std::cout << "Вы выбрали число 5" << std::endl;
      break;
    }
    default:
      std::cout << "Выберите число от 1 до 5!" << std::endl;
      goto label;
      break;
  }
}
