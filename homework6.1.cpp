#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {

    srand(time(nullptr));
    
    const int SIZE = 5;
    int arr[SIZE];
    
    cout << "Элементы массива: ";
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    cout << endl;
    
    int maxElement = arr[0];
    
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }
    
    cout << "Максимальный элемент: " << maxElement << endl;
    
    return 0;
}