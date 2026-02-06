#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    cout << "Введите целое число в десятичной системе: ";
    cin >> number;
    int count = 0;
    int numb2 = number; 
    while (numb2 != 0) {
        if (numb2 & 1) {
            count++;
        }
        numb2 >>= 1;
    }
    cout << "Количество единиц в двоичном представлении: " << count << endl;
    return 0;
}