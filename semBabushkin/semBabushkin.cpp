#include <iostream>

// Функция, отображающая различные продукты
void showSelection() {
    std::cout << "1. Шоколадка - 50 рублей" << std::endl;
    std::cout << "2. Чипсы - 30 рублей" << std::endl;
    std::cout << "3. Газировка - 20 рублей" << std::endl;
}

// Функция, продающая выбранный продукт
void sellProduct(int& dispenser, int& cash) {
    int choice;
    std::cout << "Выберите продукт: ";
    std::cin >> choice;

    switch (choice) {
    case 1:
        if (dispenser > 0) {
            std::cout << "Стоимость шоколадки: 50 рублей" << std::endl;
            std::cout << "Внесите деньги: ";
            int money;
            std::cin >> money;
            if (money >= 50) {
                cash += 50;
                dispenser--;
                std::cout << "Вы купили шоколадку!" << std::endl;
            }
            else {
                std::cout << "Недостаточно денег." << std::endl;
            }
        }
        else {
            std::cout << "Шоколадка закончилась." << std::endl;
        }
        break;

    case 2:
        // Аналогично для чипсов...
        break;

    case 3:
        // Аналогично для газировки...
        break;

    default:
        std::cout << "Неправильный выбор." << std::endl;
        break;
    }
}

// Основная функция программы
int main() {
    setlocale(LC_ALL, "Russian");
    int dispenser = 5; // Изначальное количество товаров в автомате
    int cash = 0; // Изначальная наличность

    showSelection();
    sellProduct(dispenser, cash);

    return 0;
}