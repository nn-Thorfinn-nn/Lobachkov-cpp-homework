#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    string words[MAX_SIZE];
    bool result[MAX_SIZE];
    
    int n;
    
    cout << "Введите количество элементов: ";
    cin >> n;
    
    if (n > MAX_SIZE) {
        cout << "Ошибка: количество элементов превышает максимально допустимое значение (" << MAX_SIZE << ")" << endl;
        return 1;
    }
    
    cout << "Введите элементы списка:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }
    
    bool currentValue = true;
    
    for (int i = 0; i < n; i++) {
        if (words[i] == "flick") {
            currentValue = !currentValue;
        }
        
        result[i] = currentValue;
    }
    
    cout << "Результат: [";
    for (int i = 0; i < n; i++) {
        if (result[i]) {
            cout << "true";
        } else {
            cout << "false";
        }
        
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
    
    return 0;
}