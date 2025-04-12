#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL,"russian");

    int A, B;

    cout << "Введите число A: ";
    cin >> A;
    cout << "Введите число B (должно быть больше A): ";
    cin >> B;

    if (B <= A) {
        cerr << "Ошибка: B должно быть больше A!" << endl;
        return 1; // Завершаем программу с кодом ошибки
    }

    ofstream outFile("output.txt");
    for (int i = A; i <= B; ++i) {
        outFile << (i * 3) << endl;
    }

    outFile.close();
    cout << "Результат записан в файл output.txt" << endl;

    return 0;
}


//решил
