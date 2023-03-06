#include <iostream>

class Calculator {
private:
    double num1, num2;

public:
    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }

    bool set_num1(double num) {
        if (num == 0) {
            return false;
        }
        num1 = num;
        return true;
    }

    bool set_num2(double num) {
        if (num == 0) {
            return false;
        }
        num2 = num;
        return true;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Calculator calc;

    while (true) {
        double num1, num2;
        bool validInput = false;
        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;
            if (num1 == 0) {
                std::cout << "Неверный ввод!" << std::endl;
            }
            else {
                validInput = calc.set_num1(num1);
            }
        } while (!validInput);

        validInput = false;

        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;
            if (num2 == 0) {
                std::cout << "Неверный ввод!" << std::endl;
            }
            else {
                validInput = calc.set_num2(num2);
            }
        } while (!validInput);

        std::cout << "num1 + num2: " << calc.add() << std::endl;
        std::cout << "num1 - num2: " << calc.subtract_1_2() << std::endl;
        std::cout << "num2 - num1: " << calc.subtract_2_1() << std::endl;
        std::cout << "num1 * num2: " << calc.multiply() << std::endl;
        std::cout << "num1 / num2: " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1: " << calc.divide_2_1() << std::endl;
    }

    return 0;
}
