#include <iostream>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL,"russian");

    int A, B;

    cout << "������� ����� A: ";
    cin >> A;
    cout << "������� ����� B (������ ���� ������ A): ";
    cin >> B;

    if (B <= A) {
        cerr << "������: B ������ ���� ������ A!" << endl;
        return 1; // ��������� ��������� � ����� ������
    }

    ofstream outFile("output.txt");
    for (int i = A; i <= B; ++i) {
        outFile << (i * 3) << endl;
    }

    outFile.close();
    cout << "��������� ������� � ���� output.txt" << endl;

    return 0;
}


//�����
