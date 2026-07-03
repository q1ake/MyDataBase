#include "menu.h"

#include <windows.h>

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
  if (1 <= choice <= 5) {
    switch (choice) {
      case 1: {
        std::cout << "Вы выбрали число 1" << std::endl;
        break;
      }
      case 2: {
        std::cout << "Вы выбрали число 2" << std::endl;
        break;
      }
      case 3: {
        std::cout << "Вы выбрали число 3" << std::endl;
        break;
      }
      case 4: {
        std::cout << "Вы выбрали число 4" << std::endl;
        break;
      }
      case 5: {
        std::cout << "Вы выбрали число 5" << std::endl;
        break;
      }
      default:
        std::cout << "Выберите число от 1 до 5!" << std::endl;
        goto label;
        break;
    }
  }
}
