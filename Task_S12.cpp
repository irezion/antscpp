#include <iostream>
using namespace std;

int main() {

    int sum = 0;
    int i = 1;

    while (i<=1000) {
        if (i % 7 == 0) {
            sum += i;
        }
        i += 4;
    }

    cout << "Summa chisel kratnyh 7: " << sum;

    return 0;
}

//решил
