#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long double side_A, number_of_sides, area;
    cout << "Enter side length:" << "\n";
    cin >> side_A;
    cout << "Enter the number of sides:" << "\n";
    cin >> number_of_sides;
    if(number_of_sides >= 3) {
        area =((number_of_sides * side_A * side_A) / 4) * (1 / tan(M_PI/number_of_sides));
        cout << "The area of " << number_of_sides << " square is: " << area;
    }
    else {
        cout << "The number of sides must be more than 2";
    }

    return 0;
}
