//вариант 2 квадрат и куб числа
#include <iostream>
using namespace std;
int main() {
    double number;
    cin >> number;
    cout << "Введите число: " << number << endl;
    cin >> number;
    double square = number * number;
    double cube = number * number * number;
    cout << "Квадрат: " << square << endl;
    cout << "Куб: " << cube << endl;
    return 0;
}