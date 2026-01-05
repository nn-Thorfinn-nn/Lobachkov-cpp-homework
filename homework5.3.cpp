#include <iostream>
using namespace std;
int main() {
    int N;
    
    cout << "Введите N: ";
    cin >> N;
    
    cout << "Четные числа от 1 до " << N << ":\n";
    
    
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {  
            cout << i << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}