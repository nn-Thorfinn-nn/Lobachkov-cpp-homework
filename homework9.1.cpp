#include <iostream>
using namespace std;
int minValue(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int a, b;
    
    cout << "Введите два числа через пробел: ";
    cin >> a >> b;
    
    cout << "Минимум: " << minValue(a, b) << endl;
    
    return 0;
}