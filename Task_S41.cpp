#include <iostream>
using namespace std;

double squared_sum(double a, double b) {
  double sum = a + b;
  return sum * sum;
}

int main() {
    setlocale(LC_ALL,"russian");
    double num1, num2;
    cout << "Введите первое дробное число: ";
    cin >> num1;

    cout << "Введите второе дробное число: ";
    cin >> num2;

    double result = squared_sum(num1, num2);

    cout << "Квадрат суммы чисел " << num1 << " и " << num2 << " равен: " << result <<
    endl;

  return 0;
}

//решил
