#include <iostream>
using namespace std;
void countdown(int n) {
    if (n <= 0) {
        return;
    }
    
    cout << n << " ";
    
    countdown(n - 1);
}

int main() {
    int n;
    
    cout << "Введите число: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Число должно быть положительным!" << endl;
        return 1;
    }
    
    countdown(n);
    cout << endl;
    
    return 0;
}