#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL,"russian");

    ifstream inFile("output.txt");

    int number;
    int counter = 1; // ������� �����

    while (inFile >> number) {
        cout << counter << ". " << number << endl;
        counter++;
    }

    inFile.close(); // ��������� ����
    return 0;
}


//�����
