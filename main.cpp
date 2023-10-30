#include <iostream>
#include <Windows.h>


void calculateCub(int number, int& result) {
    result = number * number * number;
}

int main() {
    system("chcp 1251");
    system("cls");
    int num, cubResult;

    std::cout << "¬вед≥ть число, дл€ €кого потр≥бно обчислити куб: ";
    std::cin >> num;

    calculateCub(num, cubResult);

    std::cout << " уб числа " << num << " дор≥внюЇ " << cubResult << std::endl;

    return 0;
}
