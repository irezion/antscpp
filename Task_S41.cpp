#include <iostream>
using namespace std;

double squared_sum(double a, double b) {
  double sum = a + b;
  return sum * sum;
}

int main() {
    setlocale(LC_ALL,"russian");
    double num1, num2;
    cout << "������� ������ ������� �����: ";
    cin >> num1;

    cout << "������� ������ ������� �����: ";
    cin >> num2;

    double result = squared_sum(num1, num2);

    cout << "������� ����� ����� " << num1 << " � " << num2 << " �����: " << result <<
    endl;

  return 0;
}

//�����
