#include <iostream>
using namespace std;


int same_digits(int from, int to = 0) {

    if (to == 0) {  // Если передано одно значение
        to = from;
        from = 0;
    }

    int count = 0;

    for (int num = from; num <= to; ++num) {
        if (num < 10) {
            continue;
        }

        bool digits[10] = {false};
        bool has_duplicate = false;
        int current_num = num;

        while (current_num > 0) {
            int digit = current_num % 10;
            if (digits[digit]) {
                has_duplicate = true;
                break;
            }
            digits[digit] = true;
            current_num /= 10;
        }

        if (has_duplicate) {
            cout << num << " "; //выводим числа с повторяющимися цифрами
            ++count;    //количество повторов
        }
    }

    cout << endl;
    return count;
}

int main() {
    // Примеры использования
    cout << same_digits(40) << endl;
    cout << same_digits(200, 250) << endl;

    return 0;
}

//решил
