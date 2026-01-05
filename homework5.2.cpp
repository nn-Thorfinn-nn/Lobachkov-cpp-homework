#include <iostream>
using namespace std;
int main() {
    int score;
    
    cout << "Введите количество баллов: ";
    cin >> score;
    
    if (score < 0 || score > 100) {
        cout << "Ошибка: количество баллов должно быть в диапазоне от 0 до 100." << endl;
        return 1;
    }
    
    if (score < 40) {
        cout << "Оценка: Неудовлетворительно" << endl;
    }
    else if (score < 60) {
        cout << "Оценка: Удовлетворительно" << endl;
    }
    else if (score < 80) {
        cout << "Оценка: Хорошо" << endl;
    }
    else {
        cout << "Оценка: Отлично" << endl;
    }
    
    return 0;
}