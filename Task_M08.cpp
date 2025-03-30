#include <iostream>
#include <math.h>

using namespace std;

double get_angle(double a, double b, double c) {

    if (a <= 0 || b <= 0 || c <= 0) {
        cerr << "Ошибка: Все стороны треугольника должны быть положительными." << endl;
        return -1.0;
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        cerr << "Ошибка: Неравенство треугольника не выполняется." << endl;
        return -1.0;
    }

    double cosinus_alpha = (b*b + c*c - a*a) / (2*b); //получаю выражение вида cos(a)=cosinus_alpha
    double rad = acos(cosinus_alpha); // перевожу cosinus_alpha в радианы
    double alpha = rad *  180 / M_PI; // перевожу rad в градусы
    return alpha;
}

int main() {
    setlocale(LC_ALL,"russian");

    double side1, side2, side3;
    cout << "Введите первую сторону треугольника: ";
    cin >> side1;

    cout << "Введите вторую сторону треугольника: ";
    cin >> side2;

    cout << "Введите трертью сторону треугольника: ";
    cin >> side3;

    double result = get_angle(side1, side2, side3);

    if (result >= 0) {
        cout << "Угол лежащий напротив первой стороны треугольника = " <<
        result << " градусов." << endl;
    }

  return 0;
}

//решил
