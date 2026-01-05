#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cout << "Введите число: ";
    cin >> x;
    
    if (x < 0){
        cout << "false";
        return 0;
    }
    
    int original = x;
    int reversed = 0;
    
    while (x != 0){
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    
    if (reversed == original){
        cout << "true";
    }
    else{
        cout << "false";
    }
}