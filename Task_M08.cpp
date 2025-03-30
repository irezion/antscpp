#include <iostream>
#include <math.h>

using namespace std;

double get_angle(double a, double b, double c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        cerr << "������: ��� ������� ������������ ������ ���� ��������������." << endl;
        return -1.0;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cerr << "������: ����������� ������������ �� �����������." << endl;
        return -1.0;
    }

    double cosinus_alpha = (b*b + c*c - a*a) / (2*b); //������� ��������� ���� cos(a)=cosinus_alpha
    double rad = acos(cosinus_alpha); // �������� cosinus_alpha � �������
    double alpha = rad *  180 / M_PI; // �������� rad � �������
    return alpha;
}

int main() {
    setlocale(LC_ALL,"russian");

    double side1, side2, side3;
    cout << "������� ������ ������� ������������: ";
    cin >> side1;

    cout << "������� ������ ������� ������������: ";
    cin >> side2;

    cout << "������� ������� ������� ������������: ";
    cin >> side3;

    double result = get_angle(side1, side2, side3);

    if (result >= 0) {
        cout << "���� ������� �������� ������ ������� ������������ = " <<
        result << " ��������." << endl;
    }

  return 0;
}

//�����
