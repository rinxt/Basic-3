#include <iostream>
#include <string>

class Counter {
private:
    int value;
public:
    Counter() : value(1) {}
    Counter(int initialValue) : value(initialValue) {}

    void increment() { value++; }
    void decrement() { value--; }
    int getValue() const { return value; }
};

int main() {
    system("chcp 1251");
    std::string input;
    int initial_value = 1;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::getline(std::cin, input);
    if (input == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
        std::getline(std::cin, input);
    }
    Counter counter(initial_value);
    std::cout << "Введите команду ('+', '-', '=' or 'x'): ";
    while (std::getline(std::cin, input)) {
        if (input == "+") {
            counter.increment();
        }
        else if (input == "-") {
            counter.decrement();
        }
        else if (input == "=") {
            std::cout << counter.getValue() << std::endl;
        }
        else if (input == "x") {
            break;
        }
        std::cout << "Введите команду ('+', '-', '=' or 'x'): ";
    }
    std::cout << "До свидания!" << std::endl;
    return 0;
}