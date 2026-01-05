#include <iostream>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;
bool isIsogram(const string& str) {
    if (str.length() > 100) {
        cerr << "Ошибка: длина строки превышает 100 символов" << endl;
        return false;
    }
    
    unordered_set<char> seenChars;
    
    for (char c : str) {
        char lowerC = tolower(static_cast<unsigned char>(c));
        
        if (isalpha(static_cast<unsigned char>(c))) {
            if (seenChars.count(lowerC) > 0) {
                return false;
            }
            seenChars.insert(lowerC);
        }
    }
    
    return true;
}

int main() {
    string input;
    
    cout << "Ввод: ";
    getline(cin, input);
    
    cout << boolalpha << isIsogram(input) << endl;
    
    return 0;
}