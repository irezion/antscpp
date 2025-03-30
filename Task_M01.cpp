#include <iostream>
using namespace std;

int main() {
    int size = 10;

    cout << "\t";

    for (int i = 1; i<=size; ++i){
        cout << i << "\t";
    }
    cout << endl;

    for (int i = 1; i<=size; ++i){
        cout << i << "\t";

        for (int j = 1; j<=size; ++j){
        cout << i * j << "\t";
        }
        cout << endl;
    }


    return 0;

}


//решил
