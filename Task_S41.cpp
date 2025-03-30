#include <iostream>
using namespace std;

double squared_sum(double a, double b) {
    double sum = a + b;
    return sum * sum;
}

int main() {
    setlocale(LC_ALL,"russian");
    double num1, num2;
    cout << "Ââåäèòå ïåðâîå äðîáíîå ÷èñëî: ";
    cin >> num1;

    cout << "Ââåäèòå âòîðîå äðîáíîå ÷èñëî: ";
    cin >> num2;

    double result = squared_sum(num1, num2);

    cout << "Êâàäðàò ñóììû ÷èñåë " << num1 << " è " << num2 << " ðàâåí: " << result <<
    endl;

  return 0;
}

//ðåøèë
