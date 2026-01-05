#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int main() {
    string input;

    cout << "Введите число с плавающей точкой: ";
    getline(cin, input);
    stringstream ss(input);
    
    double number;
    ss >> number;
    
    cout << "Как double: " << input << endl;
    
    int intValue = static_cast<int>(number);
    cout << "Как int: " << intValue << endl;
    
    bool boolValue = static_cast<bool>(number);
    cout << "Число не равно 0? " << (boolValue ? "true" : "false") << endl;
    
    return 0;
}