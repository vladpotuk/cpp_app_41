#include <iostream>
#include <Windows.h>


void calculateCub(int number, int& result) {
    result = number * number * number;
}

int main() {
    system("chcp 1251");
    system("cls");
    int num, cubResult;

    std::cout << "������ �����, ��� ����� ������� ��������� ���: ";
    std::cin >> num;

    calculateCub(num, cubResult);

    std::cout << "��� ����� " << num << " ������� " << cubResult << std::endl;

    return 0;
}
