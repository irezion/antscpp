#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL,"russian");

    string mas[] = {"����", "����", "���", "���", "������", "����", "�����", "����", "������", "������"}; // ������ � ���������� ���� �� 0 �� 9

    int number;
    cout << "������� ����� �� 0 �� 9: ";
    cin >> number;

    if (number >= 0 && number <= 9) {
        cout << "�������� �����: " << mas[number] << endl;
    } else {
        cout << "������! ������� ����� �� 0 �� 9." << endl;
    }

    return 0;
}


//�����
