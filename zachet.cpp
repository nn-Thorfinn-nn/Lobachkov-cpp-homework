#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    int N;
    
    cout << "Введите размер массива N (1 <= N <= 100): ";
    cin >> N;
    
    if (N < 1 || N > 100) {
        cout << "Некорректный размер массива!" << endl;
        return 1;
    }
    
    int arr[100];
    
    cout << "Введите " << N << " элементов массива:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    int x;
    cout << "Введите число x: ";
    cin >> x;
    
    int closestIndex = -1;
    int minDifference = numeric_limits<int>::max();
    
    for (int i = 0; i < N; i++) {
        int difference = abs(arr[i] - x);
        
        if (difference < minDifference) {
            minDifference = difference;
            closestIndex = i;
        }
    }
    
    if (closestIndex != -1) {
        cout << "Индекс ближайшего элемента: " << closestIndex << endl;
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}