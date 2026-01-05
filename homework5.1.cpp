#include <iostream>
using namespace std;
int main() {
    int num1, num2;
    

    cout << "Введите первое целое число: ";
    cin >> num1;
    
    cout << "Введите второе целое число: ";
    cin >> num2;
    
    
    int andResult = num1 & num2;
    int orResult = num1 | num2;
    int xorResult = num1 ^ num2;
    
    
    cout << "Результат побитового AND "  << " = " << andResult << endl;
    cout << "Результат побитового OR  "  << " = " << orResult << endl;
    cout << "Результат побитового XOR "  << " = " << xorResult << endl;
    
    return 0;
}