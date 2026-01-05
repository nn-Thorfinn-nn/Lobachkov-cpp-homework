#include <iostream>
#include <string>
using namespace std;

int main() {
    string first, second;
    
    cout << "Введите первую строку: ";
    getline(cin, first);
    
    cout << "Введите вторую строку: ";
    getline(cin, second);
    
    string result = first + second;
    
    cout << "Результат: " << result << endl;
    
    return 0;
}