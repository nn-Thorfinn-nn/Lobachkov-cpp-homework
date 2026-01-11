#include <iostream>
#include <string>
using namespace std;

bool isValid(string s) {
    if (s.length() > 10000) {
        cout << "Ошибка: длина строки содержит слишком много символов" << endl;
        return false;
    }
    
    for (char c : s) {
        if (c != '(' && c != ')' && 
            c != '[' && c != ']' && 
            c != '{' && c != '}') {
            cout << "Ошибка: строка содержит недопустимые символы" << endl;
            return false;
        }
    }
    
    bool changed = true;
    
    while (changed && !s.empty()) {
        changed = false;
        size_t pos;
        
        pos = s.find("()");
        if (pos != string::npos) {
            s.erase(pos, 2);
            changed = true;
        }
        
        pos = s.find("[]");
        if (pos != string::npos) {
            s.erase(pos, 2);
            changed = true;
        }
        
        pos = s.find("{}");
        if (pos != string::npos) {
            s.erase(pos, 2);
            changed = true;
        }
    }
    
    return s.empty();
}

int main() {
    string s;
    cout << "Введите строку со скобками: ";
    cin >> s;
    
    if (s.length() < 1) {
        cout << "Ошибка: строка должна содержать хотя бы 1 символ" << endl;
        return 1;
    }
    
    if (isValid(s)) {
        cout << "true" << endl;
    } else {
        if (s.length() <= 10000) {
            bool hasValidChars = true;
            for (char c : s) {
                if (c != '(' && c != ')' && 
                    c != '[' && c != ']' && 
                    c != '{' && c != '}') {
                    hasValidChars = false;
                    break;
                }
            }
            if (hasValidChars) {
                cout << "false" << endl;
            }
        }
    }
    
    return 0;
}