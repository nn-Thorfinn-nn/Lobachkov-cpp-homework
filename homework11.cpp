#include <iostream>
#include <unordered_map>
#include <string>
#include <cctype>

using namespace std;

int main() {
    unordered_map<char, int> roman = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}
    };
    
    string validChars = "IVXLCDM";
    
    cout << "Введите римское число: ";
    string s;
    cin >> s;
    
    for (char& c : s) {
        c = toupper(c);
    }
    
    if (s.length() < 1 || s.length() > 15) {
        cout << "Ошибка: длина строки должна быть от 1 до 15 символов!" << endl;
        cout << "Ваша строка имеет длину: " << s.length() << " символов" << endl;
        return 1;
    }
    
    bool hasInvalidChar = false;
    char invalidChar = '\0';
    
    for (char c : s) {
        if (validChars.find(c) == string::npos) {
            hasInvalidChar = true;
            invalidChar = c;
            break;
        }
    }
    
    if (hasInvalidChar) {
        cout << "Ошибка: строка содержит недопустимый символ '" << invalidChar << "'!" << endl;
        cout << "Допустимые символы: I, V, X, L, C, D, M" << endl;
        return 1;
    }
    
    int result = 0;
    for (int i = 0; i < s.length(); i++) {
        if (i < s.length() - 1 && roman[s[i]] < roman[s[i + 1]]) {
            result -= roman[s[i]];
        } else {
            result += roman[s[i]];
        }
    }
    
    cout << s << " = " << result << endl;
    
    return 0;
}