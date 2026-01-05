#include <iostream>
using namespace std;
int main() {
    int arr[2][3];
    
    int num = 1;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = num;
            num++;
        }
    }
    
    cout << "Массив 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}