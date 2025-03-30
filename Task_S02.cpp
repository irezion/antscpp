#include <iostream>
using namespace std;

int main() {
    int f_number, s_number;

    cout << "Enter first number: " << endl;
    cin >> f_number;
    cout << "Enter second number: " << endl;
    cin >> s_number;

    int result_div = f_number / s_number;
    int result_mod = f_number % s_number;

    cout << "Result division: " <<result_div << endl;
    cout << "Result modulus: " <<result_mod << endl;

    return 0;
}

//решил
