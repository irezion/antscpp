#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL,"russian");

    string mas[] = {"ноль", "один", "два", "три", "четыре", "пять", "шесть", "семь", "восемь", "девять"}; // Массив с названиями цифр от 0 до 9

    int number;
    cout << "Введите число от 0 до 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "Название числа: " << mas[number] << endl;
    } else {
        cout << "Ошибка! Введите число от 0 до 9." << endl;
    }

    return 0;
}


//решил
